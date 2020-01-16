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

Color::Code Color::Modifier::getCode() const
{
	return this->_code;
}

bool Color::Modifier::getIsFat() const
{
	return _isFat;
}

std::ostream &Color::operator<<(std::ostream &os, const Color::Modifier &mod)
{
    if (mod.getIsFat() == true)
        os << "\033[1;" << mod.getCode() << "m";
    if (mod.getIsFat() == false)
        os << "\033[" << mod.getCode() << "m";
    return os;
}
