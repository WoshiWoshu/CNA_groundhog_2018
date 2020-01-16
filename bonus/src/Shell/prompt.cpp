/*
** EPITECH PROJECT, 2019
** groundhog
** File description:
** prompt
*/

#include <iostream>
#include <istream>
#include <string>
#include <cstring>
#include "gd.hpp"
#include "WeatherForecast.hpp"


int prompt(int period)
{
    std::string read;
    int end = 42;
    char *cstr;
    float temp;
    WeatherForecast<float> elem(period);

    while (end != EXIT_FAILURE || end != EXIT_SUCCESS) {
        std::cin >> read;
        cstr = new char[read.length() + 1];
        cstr = std::strcpy(cstr, read.c_str());
        if (std::strcmp(cstr, "STOP\0") == 0) // rajoutez la fonction pour 
            return (EXIT_SUCCESS);
        else if ((check_value(cstr) == EXIT_FAILURE))
            return (EXIT_FAILURE);
        temp = atof(cstr);
        elem.castAnalyze(temp);
        elem.displayForecast();
    }
    return (end);
}
