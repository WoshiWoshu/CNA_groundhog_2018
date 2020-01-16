/*
** EPITECH PROJECT, 2019
** groundhog
** File description:
** color.cpp
*/

#include "Color.hpp"

Color::Modifier::Modifier(const Code &code, const bool &isFat) :
    _code(code), _isFat(isFat)
{}

Code getCode(const Modifier &color) const {return color._code;}
