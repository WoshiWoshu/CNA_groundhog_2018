/*
** EPITECH PROJECT, 2019
** groundhog
** File description:
** help.cpp
*/

#include "gd.hpp"

int make_help(char *arg)
{
    if (!strcmp(arg, "-h\0")) {
        printf("%s\n", HELP);
        return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
}
