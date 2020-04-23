#include <iostream>
#include "Edition.h"
#include "Journal.h"
#include "Book.h"
#include "Newspaper.h"

using namespace std;

int main()
{
    Newspaper newspaper2;
    string a, b, e;
    int c, d;
    cout << "Enter journal name, year and number" << endl;
    cin >> a >> c >> d;
    cout << endl;
    Journal journal(&a, c, d);
    cout << "Enter book name, author, year and number of pages" << endl;
    cin >> a >> b >> c >> d;
    cout << endl;
    Book book(&a, &b, c, d);
    cout << "Enter newspaper name, format, colorization and a year" << endl;
    cin >> a >> b >> e >> c;
    cout << endl;
    Newspaper newspaper(&a, &b, &e, c);
    cout << "Now I will show you what you have created:" << endl;
    cout << endl;
    cout << "Journal:" << endl;
    journal.print();
    cout << endl;
    cout << "Book:" << endl;
    book.print();
    cout << endl;
    cout << "Newspaper:" << endl;
    newspaper.print();
    cout << endl;
    cout << "Also here is a second newspaper that is exactly the same as the first one:" << endl;
    newspaper2=newspaper;
    newspaper2.print();
    return 0;
}
