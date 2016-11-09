
//Converting Fahrenheit to Celsius
constexpr long double operator"" _fah(long double const degrees)
{
    return (degrees - 32.0) / 1.8;
}

// Call quick documentation (Ctrl+Q/F1) on _fah
// Rename _fah -> _fh using Rename refactoring
bool checkTemperature(long double temp) {
    auto threshold = 77.0_fah;
    return (temp < threshold);
}