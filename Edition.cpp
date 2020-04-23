#include "Edition.h"
#include <string>
#include <cstring>

    Edition::Edition()
    {
        setYear(0);
    }
    Edition::Edition(const string *name, const int year)
    {
        this->name=*name;
        if(!setYear(year)) setYear(0);
    }

    Edition::Edition(const Edition &edition)
    {
        this->name=edition.name;
        this->year=edition.year;
    }

    bool Edition::setName(const string *name)
    {
        this->name=*name;
        return 1;
    }

    bool Edition::setYear(const int year)
    {
        if (year<0) return 0;
        this->year=year;
        return 1;
    }

    string Edition::getName() const
    {
        return name;
    }

    int Edition::getYear() const
    {
        return year;
    }

    Edition & Edition::operator = (const Edition &edition)
    {
        if (this == &edition)
        return *this;
        this->name=edition.name;
        this->year=edition.year;
        return *this;
    }
