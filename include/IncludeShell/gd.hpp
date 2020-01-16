#ifndef GD_HPP_
#define GD_HPP_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define HELP "SYNOPSIS\n\t./groundhog period\nDESCRIPTION\n\tperiod\tthe number of days defining a period"
#define EXIT_F 84

int check_value_r(char *);
int error_gestion(int, char **);
int groundhog(int, char **);
//error_gestion functions

int make_help(char *);
//help function

int prompt(int);

#endif /* GD_HPP_ */
