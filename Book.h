#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include <string>
#include "Edition.h"

using namespace std;

class Book: public Edition
{
    string author;
    int countPage;

public:
    Book();
    Book(const string *name, const string *author, const int year, const int number);
    Book(const Book &book);
    virtual void print();
    bool setAuthor(const string *author);
    string getAuthor() const;
    bool setCountPage(const int countPage);
    int getCountPage() const;
    Book &operator = (const Book &book);
};

#endif // BOOK_H_INCLUDED
