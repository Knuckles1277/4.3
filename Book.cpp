#include <iostream>
#include "Book.h"
#include "Edition.h"
#include <string>
#include <cstring>

    Book::Book(): Edition(), countPage(0){}

    Book::Book(const string *name, const string *author, const int year, const int countPage): Edition(name, year), author(*author){setCountPage(countPage);}

    Book::Book(const Book &book): Edition(book), author(book.author), countPage(book.countPage){}

    bool Book::setAuthor(const string *author)
    {
        this->author=*author;
        return 1;
    }

    bool Book::setCountPage(const int countPage)
    {
        if (countPage<0) this->countPage=0;
        this->countPage=countPage;
        return 1;
    }

    string Book::getAuthor() const
    {
        return author;
    }

    int Book::getCountPage() const
    {
        return countPage;
    }

    void Book::print()
    {
        cout << "Name: " << name << "\nAuthor: " << author << "\nYear: " << year << "\nNumber of pages: " << countPage << endl;
    }

    Book & Book::operator = (const Book &book)
    {
        if (this == &book)
        return *this;
        Edition::operator=(book);
        this->author=book.author;
        this->countPage=book.countPage;
        return *this;
    }

