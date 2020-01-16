/*
** EPITECH PROJECT, 2019
** libbmyc++
** File description:
** color.hpp
*/

#pragma once

#include <ostream>

namespace Color {
    enum Code {
        FG_RED      = 31,
        FG_GREEN    = 32,
        FG_BLUE     = 34,
        FG_MAGENTA  = 35,
        FG_CYAN     = 36,
        FG_DEFAULT  = 0,
        BG_RED      = 41,
        BG_GREEN    = 42,
        BG_BLUE     = 44,
        BG_DEFAULT  = 49
    };
    class Modifier {
    public:
        Modifier(const Code &code, const bool &isFat);
        Code getCode(void) const;
        bool getIsFat(void) const;
    private:
        Code _code;
        bool _isFat;
    };
    std::ostream &operator<<(std::ostream &os, const Color::Modifier& mod);
}

static const Color::Modifier _F_RED(Color::FG_RED, true);
static const Color::Modifier _F_BLUE(Color::FG_BLUE, true);
static const Color::Modifier _F_GREEN(Color::FG_GREEN, true);
static const Color::Modifier _F_MAGENTA(Color::FG_MAGENTA, false);
static const Color::Modifier _F_CYAN(Color::FG_CYAN, false);
static const Color::Modifier _F_DEFAULT(Color::FG_DEFAULT, false);
static const Color::Modifier _B_RED(Color::BG_RED, true);
static const Color::Modifier _B_BLUE(Color::BG_BLUE, true);
static const Color::Modifier _B_GREEN(Color::BG_GREEN, true);
static const Color::Modifier _B_DEFAULT(Color::BG_DEFAULT, false);
