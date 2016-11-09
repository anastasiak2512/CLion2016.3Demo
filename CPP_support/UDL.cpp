
//Sample 1: Call quick documentation (Ctrl+Q on Windows and Linux / F1 on macOS) on _fah
//Sample 2: Rename _fah -> _fh using Rename refactoring
constexpr long double operator"" _fah(long double const degrees)
{
    //Converting Fahrenheit to Celsius
    return (degrees - 32.0) / 1.8;
}

bool checkTemperature(long double temp) {
    auto threshold = 77.0_fah;
    return (temp < threshold);
}

//Sample 3: Chrono symbols parsing/resolving
#include <chrono>
#include <iostream>

using namespace std::chrono_literals;

void check_chrono() {
    auto day = 24h;
    auto halfhour = 0.5h;
    std::cout << "one day is " << day.count() << " hours\n"
              << "half an hour is " << halfhour.count() << " hours\n";
}