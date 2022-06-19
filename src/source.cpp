#include "source.h"

void foo1()
{
    PROFILE_FUNCTION();

    for (int i = 0; i < 1000; i++)
    {
        std::cout << "Hello world #" << i << std::endl;
    }
}

void foo2()
{
    PROFILE_FUNCTION();

    for (int i = 0; i < 1000; i++)
    {
        std::cout << "Hello world #" << sqrt(i) << std::endl;
    }
}

void runBenchmarks()
{
    std::cout << "Running Benchmarks...\n";
    //std::thread a([]() {foo1(); });
    //std::thread b([]() {foo2(); });

    //a.join();
    //b.join();

    foo1();
    foo2();
}
