/*
** EPITECH PROJECT, 2019
** groundhog
** File description:
** WeatherForecastBase.cpp
*/

#include "WeatherForecast.hpp"

int Toll::_catchSwitch_ = 0;
bool Toll::_checkZeroR_ = true;

template<>
std::pair<float, bool> WeatherForecast<float>::_switch_(0.0, false);

template<>
void WeatherForecast<float>::stSetSwitch(float first, bool second)
{
    _switch_ = std::make_pair(first, second);
}

template<>
float WeatherForecast<float>::stGetSwitchElem(void)
{
    return _switch_.first;
}

template<>
bool WeatherForecast<float>::stGetSwitchOcc(void)
{
    return _switch_.second;
}
