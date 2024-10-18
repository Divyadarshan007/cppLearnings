#include <iostream>
using namespace std;

void divi(int);
int main()
{
    int a;
    cout << "Enter any number : ";
    cin >> a;

    divi(a);
    return 0;
}

void divi(int a)
{
    if ((a % 3 == 0) && (a % 5 == 0))
    {
        cout << a << " is divisible by both 3 & 5 ";
    }
    else if ((a % 3 == 0) && (a % 5 != 0))
    {
        cout << a << " is divisible by 3 but not with 5 ";
    }
    else if ((a % 3 != 0) && (a % 5 == 0))
    {
        cout << a << " is divisible by 5 but not with 3 ";
    }
    else
    {
        cout << a << " is not divisible by both 3 & 5 ";
    }
}