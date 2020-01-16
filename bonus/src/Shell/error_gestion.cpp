/*
** EPITECH PROJECT, 2019
** groundhog
** File description:
** error_gestion.cpp
*/

#include "gd.hpp"

int check_value(char *arg)
{
    int i = 0;
    while (arg[i]) {
        if ((arg[i]< '0' || arg[i] >'9' )&& arg[i] != '.') {
            return (EXIT_FAILURE);
        }
        i += 1;
    }
    return (EXIT_SUCCESS);
}

int error_gestion(int argc, char **argv)
{
    int err_args;

    if (argc > 2 || argc < 1) {
        dprintf(2,"Error args pleasee follow -help");
        return (EXIT_FAILURE);
    }
    err_args = check_value(argv[1]);
    if (err_args == EXIT_FAILURE) {
        dprintf(2,"Please follow -h");
        return (EXIT_FAILURE);    
    }
    return (EXIT_SUCCESS);
}

int groundhog(int argc, char **argv)
{
    int err_ges;
    int help_f;

    if (argc == 1) {
        dprintf(2, "Please follow -h\n");
        return (EXIT_FAILURE);
    }
    help_f = make_help(argv[1]);
    if (help_f == EXIT_FAILURE) {
        err_ges = error_gestion(argc, argv);
        if (err_ges == EXIT_FAILURE)
            return (EXIT_FAILURE);
        //algo_groundhog(argv[1]);
        return (EXIT_SUCCESS);  
    }
    return(EXIT_FAILURE);
}
