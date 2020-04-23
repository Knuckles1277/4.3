#ifndef NEWSPAPER_H_INCLUDED
#define NEWSPAPER_H_INCLUDED
#include <string>
#include "Edition.h"

using namespace std;

class Newspaper: public Edition
{
    string format;
    string color;

public:
    Newspaper();
    Newspaper(const string *name, const string *format, const string *color, const int year);
    Newspaper(const Newspaper &newspaper);
    virtual void print();
    bool setFormat(const string *format);
    string getFormat() const;
    bool setColor(const string *color);
    string getColor() const;
    Newspaper &operator = (const Newspaper &newspaper);
};

#endif // NEWSPAPER_H_INCLUDED
