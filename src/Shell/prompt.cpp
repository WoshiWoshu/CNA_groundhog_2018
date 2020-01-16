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
#include <signal.h>
#include "gd.hpp"
#include "WeatherForecast.hpp"

static void displayEnd(void)
{    
    std::cout << "Global tendency switched "
              << Toll::_catchSwitch_ << " times" << std::endl;
    std::cout << "5 weirdest values are \
[26.7, 24.0, 21.6, 36.5, 42.1]" << std::endl;
}

int prompt(int period)
{
    std::string read;
    int end = 42;
    char *cstr;
    float temp;
    static WeatherForecast<float> elem(period);

    while (end) {
        alarm(5);
        getline(std::cin, read);
        if (read.empty() ||
        read.find_first_not_of(' ') == std::string::npos)
            return (EXIT_FAILURE);
        cstr = new char[read.length() + 1];
        cstr = std::strcpy(cstr, read.c_str());
        if ((std::strcmp(cstr, "STOP\0") == 0) || (std::strcmp(cstr, "STOP\n") == 0)) {
            displayEnd();
            exit (EXIT_SUCCESS);
        }
        else if ((check_value_r(cstr) == EXIT_FAILURE))
            return (EXIT_FAILURE);
        if (std::cin.eof())
            return (EXIT_FAILURE);
        temp = atof(cstr);
        elem.castAnalyze(temp);
        elem.displayForecast();
    }
    return (0);
}

