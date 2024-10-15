#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;

    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    return 0;
}