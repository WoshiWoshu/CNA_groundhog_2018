/*
** EPITECH PROJECT, 2019
** groundhog
** File description:
** WeatherForecast.hpp
*/

#pragma once

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
    bool displayInit(void) const;
    static std::pair<T, bool> _switch_;
};
