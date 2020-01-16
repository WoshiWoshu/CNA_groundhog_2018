/*
** EPITECH PROJECT, 2019
** groundhog
** File description:
** main.cpp
*/

#include "WeatherForecast.hpp"
#include "gd.hpp"

int main(int ac, char **av)
{
    if (groundhog(ac, av) == EXIT_FAILURE)
        return (84);
    while (prompt(atoi(av[1])) != EXIT_SUCCESS)
        return (84);
    return 0;
}
