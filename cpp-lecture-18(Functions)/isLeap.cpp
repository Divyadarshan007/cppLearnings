#include <iostream>
using namespace std;

int isLeap(int);

int main()
{
    int year;

    cout << "Enter year : ";
    cin >> year;

    isLeap(year);
    return 0;
}
int isLeap(int year)
{
    if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0))
    {
        cout << "It is a Leap year !";
    }
    else
    {
        cout << "It is not a Leap year !";
    }
}