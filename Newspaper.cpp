#include <iostream>
#include "Newspaper.h"
#include "Edition.h"
#include <string>
#include <cstring>

    Newspaper::Newspaper(): Edition(){}

    Newspaper::Newspaper(const string *name, const string *format, const string *color, const int year): Edition(name, year), format(*format), color(*color){}

    Newspaper::Newspaper(const Newspaper &newspaper): Edition(newspaper), format(newspaper.format), color(newspaper.color){}

    bool Newspaper::setFormat(const string *format)
    {
        this->format=*format;
        return 1;
    }

    bool Newspaper::setColor(const string *color)
    {
        this->color=*color;
        return 1;
    }

    string Newspaper::getFormat()
    {
        return format;
    }

    string Newspaper::getColor()
    {
        return color;
    }

    void Newspaper::print()
    {
        cout << "Name: " << name << "\nYear: " << year << "\nFormat: " << format << "\nColor: " << color << endl;
    }

    Newspaper & Newspaper::operator = (const Newspaper &newspaper)
    {
        if (this == &newspaper)
        return *this;
        Edition::operator=(newspaper);
        this->format=newspaper.format;
        this->color=newspaper.color;
        return *this;
    }
