##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

PP		=       g++

RM		=	rm -f

INCDIRS		=	$(addprefix -I, $(shell find ./include -type d -print))

CPPFLAGS	=       -Wall -Wextra -O3

CPPFLAGS	+=      $(INCDIRS)

NAME		=	groundhog

SRCS		=	./src/WeatherForecast/Indicator.cpp			\
			./src/WeatherForecast/WeatherForecastExt.cpp		\
			./src/WeatherForecast/WeatherForecast.cpp		\
			./src/Shell/error_gestion.cpp				\
			./src/Shell/help.cpp					\
			./src/Shell/prompt.cpp					\
			./main.cpp

OBJS            =       $(SRCS:.cpp=.o)

all             :       $(NAME)

$(NAME)         :       $(OBJS)
		$(PP) -o $(NAME) $(OBJS)

clean           :
		$(RM) $(OBJS)

fclean          :       clean
			$(RM) $(NAME)

re              :       fclean all

.PHONY		:	all clean fclean re
