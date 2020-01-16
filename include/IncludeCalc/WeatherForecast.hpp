/*
** EPITECH PROJECT, 2019
** groundhog
** File description:
** WeatherForecast.hpp
*/

#pragma once

#include <iostream>
#include <iomanip>
#include "Indicator.hpp"

template<typename T>
class WeatherForecast
{
public:
    WeatherForecast(std::size_t iSize);
    ~WeatherForecast();
    T castAnalyze(T data);
    void displayForecast(void) const;
    static void stSetSwitch(T first, bool second);
    static T stGetSwitchElem(void);
    static bool stGetSwitchOcc(void);
private:
    Indicator<T, void> *_indicator;
    T _g;
    T _r;
    T _s;
    static std::pair<T, bool> _switch_;
};

namespace Toll
{
    extern int _catchSwitch_;
    extern bool _checkZeroR_;
}

template<typename S, typename G = std::string, typename F = std::string>
void displayDataGen(S dataG, G dataR, F dataS)
{
    std::cout << std::fixed << std::setprecision(2) << "g=" << dataG << '\t';
    std::cout << std::fixed << std::setprecision(0) << "r=" << dataR << "%\t";
    std::cout << std::fixed << std::setprecision(2) << "s=" << dataS;
    if (WeatherForecast<float>::stGetSwitchOcc() == true) {
        std::cout << '\t' << "a switch occurs" << std::endl;
        Toll::_catchSwitch_++;
    }
    else
        std::cout << std::endl;
}
