#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    setlocale(0, "");

    cout << "Hello World!\n";

    Date date;
    
    date.Input();
    date.Print();

    ++date; // Увеличивает на 1 день
    date.Print();

    --date; // Уменшает на 1 день
    date.Print();

    date++; // Увеличивает на 1 день
    date.Print();

    date--; // Уменшает на 1 день
    date.Print();

    date+10; // Увеличивает на 10 день
    date.Print();

    date-10; // Уменшает на 10 день
    date.Print();

    date + 100; // Увеличивает на 100 день
    date.Print();

    date - 100; // Уменшает на 100 день
    date.Print();

    date + 10000; // Увеличивает на 10000 день
    date.Print();

    date - 10000; // Уменшает на 10000 день
    date.Print();

    Date dateRez = date - date;
    dateRez.Print();

    date += 10000; // Увеличивает на 10000 день
    date.Print();

    date -= 10000; // Уменшает на 10000 день
    date.Print();

    if (date < date)
        cout << "True" << endl;
    else
        cout << "Fasle" << endl;

    if (date > date)
        cout << "True" << endl;
    else
        cout << "Fasle" << endl;

    if (date <= date)
        cout << "True" << endl;
    else
        cout << "Fasle" << endl;

    if (date >= date)
        cout << "True" << endl;
    else
        cout << "Fasle" << endl;

    if (date == date)
        cout << "True" << endl;
    else
        cout << "Fasle" << endl;

    if (date != date)
        cout << "True" << endl;
    else
        cout << "Fasle" << endl;

    

    


    return 0;
}

