/*
** EPITECH PROJECT, 2019
** groundhog
** File description:
** main.cpp
*/

#include "WeatherForecast.hpp"
#include <stdlib.h>
//#include "gd.hpp"

using namespace std;

int main(int ac, char **av)
{
    // if (groundhog(ac, av) == EXIT_FAILURE)
    //     return 84;
    // if (prompt(atoi(av[1])) == EXIT_FAILURE)
    //     return 84;
    WeatherForecast<float> elem(7);

    elem.castAnalyze(27.7);
    elem.displayForecast();
    elem.castAnalyze(31.0);
    elem.displayForecast();
    elem.castAnalyze(32.7);
    elem.displayForecast();
    elem.castAnalyze(34.7);
    elem.displayForecast();
    elem.castAnalyze(35.9);
    elem.displayForecast();
    elem.castAnalyze(37.4);
    elem.displayForecast();
    elem.castAnalyze(38.2);
    elem.displayForecast();

    
    elem.castAnalyze(39.5);
    elem.displayForecast();
    elem.castAnalyze(40.3);
    elem.displayForecast();
    elem.castAnalyze(42.2);
    elem.displayForecast();
    elem.castAnalyze(41.3);
    elem.displayForecast();
    elem.castAnalyze(40.4);
    elem.displayForecast();
    elem.castAnalyze(39.8);
    elem.displayForecast();
    elem.castAnalyze(38.7);
    elem.displayForecast();
    elem.castAnalyze(36.5);
    elem.displayForecast();
    elem.castAnalyze(35.7);
    elem.displayForecast();

    
    elem.castAnalyze(33.4);
    elem.displayForecast();
    elem.castAnalyze(29.8);
    elem.displayForecast();
    elem.castAnalyze(27.5);
    elem.displayForecast();
    elem.castAnalyze(25.2);
    elem.displayForecast();
    elem.castAnalyze(24.7);
    elem.displayForecast();
    elem.castAnalyze(23.1);
    elem.displayForecast();
    elem.castAnalyze(22.8);
    elem.displayForecast();
    elem.castAnalyze(22.7);
    elem.displayForecast();
    elem.castAnalyze(23.6);
    elem.displayForecast();

    
    elem.castAnalyze(24.3);
    elem.displayForecast();
    elem.castAnalyze(24.5);
    elem.displayForecast();
    elem.castAnalyze(26.7);
    elem.displayForecast();
    elem.castAnalyze(27.0);
    elem.displayForecast();
    elem.castAnalyze(27.4);
    elem.displayForecast();
    elem.castAnalyze(29.8);
    elem.displayForecast();
    elem.castAnalyze(29.4);
    elem.displayForecast();
    elem.castAnalyze(31.5);
    elem.displayForecast();

    
    elem.castAnalyze(29.6);
    elem.displayForecast();
    elem.castAnalyze(29.8);
    elem.displayForecast();
    elem.castAnalyze(28.9);
    elem.displayForecast();
    elem.castAnalyze(28.7);
    elem.displayForecast();
    elem.castAnalyze(27.2);
    elem.displayForecast();
    elem.castAnalyze(25.7);
    elem.displayForecast();
    elem.castAnalyze(26.0);
    elem.displayForecast();
    elem.castAnalyze(25.2);
    elem.displayForecast();
    elem.castAnalyze(21.6);
    elem.displayForecast();
    
    
    elem.castAnalyze(20.3);
    elem.displayForecast();
    elem.castAnalyze(21.1);
    elem.displayForecast();
    elem.castAnalyze(20.4);
    elem.displayForecast();
    elem.castAnalyze(19.8);
    elem.displayForecast();
    elem.castAnalyze(19.1);
    elem.displayForecast();
    elem.castAnalyze(19.6);
    elem.displayForecast();
    elem.castAnalyze(21.2);
    elem.displayForecast();
    elem.castAnalyze(21.0);
    elem.displayForecast();
    elem.castAnalyze(21.4);
    elem.displayForecast();
    elem.castAnalyze(24.0);
    elem.displayForecast();

    
    elem.castAnalyze(25.5);
    elem.displayForecast();
    elem.castAnalyze(25.5);
    elem.displayForecast();
    elem.castAnalyze(26.4);
    elem.displayForecast();
    elem.castAnalyze(29.4);
    elem.displayForecast();
    elem.castAnalyze(32.1);
    elem.displayForecast();
    elem.castAnalyze(31.4);
    elem.displayForecast();
    elem.castAnalyze(32.3);
    elem.displayForecast();
    elem.castAnalyze(35.2);
    elem.displayForecast();
    elem.castAnalyze(38.3);
    elem.displayForecast();

    
    elem.castAnalyze(36.6);
    elem.displayForecast();
    elem.castAnalyze(38.4);
    elem.displayForecast();
    elem.castAnalyze(39.9);
    elem.displayForecast();
    elem.castAnalyze(40.5);
    elem.displayForecast();
    elem.castAnalyze(39.4);
    elem.displayForecast();
    elem.castAnalyze(39.0);
    elem.displayForecast();
    elem.castAnalyze(40.5);
    elem.displayForecast();
    elem.castAnalyze(42.1);
    elem.displayForecast();
    elem.castAnalyze(38.7);
    elem.displayForecast();

    
    elem.castAnalyze(37.5);
    elem.displayForecast();
    elem.castAnalyze(38.1);
    elem.displayForecast();
    elem.castAnalyze(36.5);
    elem.displayForecast();
    elem.castAnalyze(35.4);
    elem.displayForecast();
    return 0;
}
