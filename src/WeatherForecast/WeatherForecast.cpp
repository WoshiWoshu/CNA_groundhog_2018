/*
** EPITECH PROJECT, 2019
** groundhog
** File description:
** WeatherForecast.cpp
*/

// #include <iostream>
// #include <iomanip>
#include "WeatherForecast.hpp"

template<>
WeatherForecast<float>::WeatherForecast(std::size_t iSize) :
    _indicator(new Indicator<>(iSize)),  _g(0.0), _r(0.0), _s(0.0)
{}

template<>
WeatherForecast<float>::~WeatherForecast()
{
    delete _indicator;
}

template<>
float WeatherForecast<float>::castAnalyze(float data)
{
    short firstWeek = static_cast<short>(_indicator->getFirstWeek());

    _indicator->setPushData(data);
    if (Indicator<>::stGetDays() > firstWeek) {
        _r = _indicator->computeR(data);
        _g = _indicator->computeG(data);
        _indicator->setPopData();
    }
    if (Indicator<>::stGetDays() >= firstWeek)
        _s = _indicator->computeS();
    return data;
}

template<>
void WeatherForecast<float>::displayForecast(void) const
{
    short firstWeek = static_cast<short>(_indicator->getFirstWeek());
    
    if (Indicator<>::stGetDays() < firstWeek)
        displayDataGen<std::string>("nan", "nan", "nan");
    else if (Indicator<>::stGetDays() == firstWeek)
        displayDataGen<std::string, std::string, float>("nan", "nan", _s);
    else if (Toll::_checkZeroR_ == true)
        displayDataGen<float, std::string, float>(_g, "nan", _s);
    else
        displayDataGen<float, float, float>(_g, _r, _s);
}
