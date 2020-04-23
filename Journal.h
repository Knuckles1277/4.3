#ifndef JOURNAL_H_INCLUDED
#define JOURNAL_H_INCLUDED
#include <string>
#include "Edition.h"

using namespace std;

class Journal: public Edition
{
    int number;

public:
    Journal();
    Journal(const string *name, const int year, const int number);
    Journal(const Journal &journal);
    virtual void print() const;
    bool setNumber(const int number);
    int getNumber() const;
    Journal &operator = (const Journal &journal);
};

#endif // JOURNAL_H_INCLUDED
