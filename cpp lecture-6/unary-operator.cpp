#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter A : ";
    cin >> a;

    cout << a++ << endl;
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;
    cout << endl;
    cout << a-- << endl;
    cout << a << endl;
    cout << --a << endl;
    cout << a << endl;

    return 0;
}