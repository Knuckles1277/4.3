#ifndef EDITION_H_INCLUDED
#define EDITION_H_INCLUDED
#include <string>

using namespace std;

class Edition
{
protected:
    string name;
    int year;
public:
    Edition();
    Edition(const string *name, const int year);
    Edition(const Edition &edition);
    virtual void print()const=0;
    bool setName(const string *name);
    bool setYear(const int year);
    string getName() const;
    int getYear() const;
    Edition &operator = (const Edition &edition);
};

#endif // EDITION_H_INCLUDED
