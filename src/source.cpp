#include "source.h"

using namespace std::literals;

void foo1()
{
    PROFILE_FUNCTION();

    for (int i = 0; i < 1000; i++)
    {
        std::cout << std::format("Hello {}!\n", "world");

    }
}

void foo2()
{
    PROFILE_FUNCTION();

    for (int i = 0; i < 1000; i++)
    {
        std::cout << "Hello"s + "world";
    }
}

void runBenchmarks()
{
    std::cout << "Running Benchmarks...\n";
    std::thread a([]() {foo1(); });
    std::thread b([]() {foo2(); });

    a.join();
    b.join();
}
