/*
** EPITECH PROJECT, 2019
** Groundhog
** File description:
** Indicator.cpp
*/

#include <cmath>
//@#include "Indicator.hpp"
#include "WeatherForecast.hpp"

template<>
short Indicator<>::_days_ = 0;

template<>
short Indicator<>::stGetDays(void)
{
    return _days_;
}

template<>
Indicator<>::Indicator(std::size_t size) : _temperature(0),
                                           _firstWeek(size)
{}

template<>
float Indicator<>::computeS(void)
{
    float sum = 0.0;
    float mean = 0.0;
    float variance = 0.0;
    float deviation = 0.0;

    for (size_t i = 0; i < _firstWeek; ++i)
        sum += _temperature[i];
    mean = sum / _firstWeek;
    for (size_t i = 0; i < _firstWeek; ++i)
        variance += std::pow(_temperature[i] - mean, 2);
    variance = variance / _firstWeek;
    deviation = std::sqrt(variance);
    return deviation;
}

template<>
float Indicator<>::computeR(const float &currTemp)
{
    float oldTemp = _temperature[0];
    float increase = currTemp - oldTemp;
    float switchElem = WeatherForecast<float>::stGetSwitchElem();

    increase = (increase / oldTemp) * 100;
    if (switchElem < 0 and increase > 0)
        WeatherForecast<float>::stSetSwitch(increase, true);
    else if (switchElem > 0 and increase < 0)
        WeatherForecast<float>::stSetSwitch(increase, true);
    else
        WeatherForecast<float>::stSetSwitch(increase, false);
    return increase;
}

template<>
float Indicator<>::computeG(const float &temp)
{
    float gap[_firstWeek]{0};
    float sum(0.0);
    float result(0.0);
    std::size_t i(0);

    static_cast<void>(temp);
    for (; i < _firstWeek; ++i) {
        gap[i] = _temperature[i + 1] - _temperature[i];
        (gap[i] > 0) ? sum+=gap[i] : 0;
    }
    result = sum / _firstWeek;
    return result;
}
