
//Sample 2: Chrono symbols parsing/resolving
//Use quick documentation (Ctrl+Q on Windows and Linux / F1 on macOS)
//to check chrono values types
#include <chrono>
#include <iostream>

using namespace std::chrono_literals;

void check_chrono() {
    auto day = 24h;
    auto halfhour = 0.5h;
    std::cout << "one day is " << day.count() << " hours\n"
              << "half an hour is " << halfhour.count() << " hours\n";
}
