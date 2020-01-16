/*
** EPITECH PROJECT, 2019
** Groundhog
** File description:
** Indicator.cpp
*/

#pragma once

#include <deque>
#include "Color.hpp"

template<typename T = float, typename S = void>
class Indicator
{
public:
    Indicator(std::size_t sizeTemp);
    static short stGetDays(void);
    std::size_t getFirstWeek(void) const;
    S setPushData(T elem);
    S setPopData(void);
    T computeS(void);
    T computeG(const T &temp);
    T computeR(const T &currtemp);
private:
    std::deque<T> _temperature;
    static short _days_;
    std::size_t _firstWeek;
};

template<typename T, typename S>
S Indicator<T, S>::setPushData(T elem)
{
   _temperature.push_back(elem);
   _days_+=1;
}

template<typename T, typename S>
S Indicator<T, S>::setPopData(void)
{
    _temperature.pop_front();
}

template<typename T, typename S>
std::size_t Indicator<T, S>::getFirstWeek(void) const
{
    return _firstWeek;
}
