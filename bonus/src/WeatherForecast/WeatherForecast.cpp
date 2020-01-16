/*
** EPITECH PROJECT, 2019
** groundhog
** File description:
** WeatherForecast.cpp
*/

#include <iostream>
#include <iomanip>
#include "Color.hpp"
#include "WeatherForecast.hpp"

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
bool WeatherForecast<float>::displayInit(void) const
{
    if ((Indicator<>::stGetDays()) <
    static_cast<short>(_indicator->getFirstWeek())) {
        std::cout << "g=" << _F_CYAN << "nan" << _F_DEFAULT << '\t';
        std::cout << "r=" << _F_CYAN << "nan" << _F_DEFAULT << "%\t";
        std::cout << "s=" << _F_CYAN << "nan" << _F_DEFAULT << std::endl;
        return true;
    }
    if ((Indicator<>::stGetDays()) ==
    static_cast<short>(_indicator->getFirstWeek())) {
        std::cout << "g=" << _F_CYAN << "nan" << _F_DEFAULT << '\t';
        std::cout << "r=" << _F_CYAN << "nan" << _F_DEFAULT << "%\t";
        std::cout << std::fixed << std::setprecision(2)
                  << "s=" << _F_GREEN << _s << _F_DEFAULT << std::endl;
        return true;
    }
    return false;
}

template<>
void WeatherForecast<float>::displayForecast(void) const
{
    if (this->displayInit() == false) {
        std::cout << "g=" << _F_RED << _g << _F_DEFAULT << '\t';
        std::cout << std::fixed << std::setprecision(0) <<
             "r=" << _F_BLUE << _r << _F_DEFAULT << "%\t";
        std::cout << std::fixed << std::setprecision(2)
                  << "s=" << _F_GREEN << _s << _F_DEFAULT;
        if (WeatherForecast<float>::stGetSwitchOcc() == true)
            std::cout << '\t' << _F_CYAN << "a switch occurs"
                      << _F_DEFAULT << std::endl;
        else
            std::cout << std::endl;
    }
}
