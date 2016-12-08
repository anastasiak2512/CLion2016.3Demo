#include <thread>

//Sample 1: Fixed incorrect ‘Unused variable’ for the so called ‘guard’ idiom
int g_i = 0;
std::mutex g_i_mutex;

void safe_increment()
{
    std::lock_guard<std::mutex> lock(g_i_mutex);
    ++g_i;

    //...
}

//Sample 2: Support for __attribute__(unused)
int sample (__attribute__((unused)) int bar) {
    return 0;
}

//Sample 3: Support for __builtin_unreachable
enum class SomeEnum
{
    Enum1,
    Enum2,
    Enum3
};

unsigned int test(const SomeEnum someEnum)
{
    switch(someEnum)
    {
        case SomeEnum::Enum1:
            return 3u;
        case SomeEnum::Enum2:
            return 4u;
        default:
            __builtin_unreachable();
    }
}
