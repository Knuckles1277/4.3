#include <iostream>
#include "Journal.h"
#include "Edition.h"
#include <string>
#include <cstring>

    Journal::Journal(): Edition(), number(0){}

    Journal::Journal(const string *name, const int year, const int number): Edition(name, year) {setNumber(number);}

    Journal::Journal(const Journal &journal): Edition(journal), number(journal.number){}

    bool Journal::setNumber(const int number)
    {
        if (number<0) this->number=0;
        this->number=number;
        return 1;
    }

    int Journal::getNumber() const
    {
        return number;
    }

    void Journal::print() const
    {
        cout << "Name: " << name << "\nYear: " << year << "\nEntry number: " << number << endl;
    }

    Journal & Journal::operator = (const Journal &journal)
    {
        if (this == &journal)
        return *this;
        Edition::operator=(journal);
        this->number=journal.number;
        return *this;
    }
