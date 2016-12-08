// Sample 3: Using Howard Hinnant's date library
// See: https://github.com/HowardHinnant/date
#include "date.h"

#include <iostream>

// The _y and _d suffixes are understood by CLion (no red underlines),
// show quick docs and you can navigate through to the source
// (CMD+B on Mac, Ctrl+B on Windows/ Linux)
void useDateLibrary() {

    using namespace date::literals;

    std::cout << 16_d / 11 / 2016_y << std::endl;
    std::cout << 11 / 16_d / 2016_y << std::endl;
    std::cout << 2016_y / nov / 16 << std::endl;

    auto dt = nov / 16 / 2016_y;
    std::cout << dt << std::endl;
}
