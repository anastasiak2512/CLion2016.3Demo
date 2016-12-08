//Sample 1: Rename _fah -> _fh using Rename refactoring

constexpr long double operator"" _fah(long double const degrees)
{
    //Converting Fahrenheit to Celsius
    return (degrees - 32.0) / 1.8;
}


bool checkTemperature(long double temp) {
    auto threshold = 77.0_fah;
    return temp < threshold;
}

bool isFreezing(long double tempInFahrenheit) {
    return tempInFahrenheit <= 32.0_fah;
}
bool isBoiling(long double tempInFahrenheit) {
    return tempInFahrenheit >= 212.0_fah;
}
