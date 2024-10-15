#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;
    cout << "Enter C : ";
    cin >> c;
    cout << (a <= b) && (b <= c);
    cout << endl;
    cout << (a >= b) && (b <= c);
    cout << endl;
    cout << (a == b) && (b <= c);
    cout << endl;
    cout << (a < b) && (b < c);
    cout << endl;
    cout << (a > b) && (b < c);
    cout << endl;
    cout << endl;
    cout << (a <= b) || (b <= c);
    cout << endl;
    cout << (a >= b) || (b <= c);
    cout << endl;
    cout << (a == b) || (b <= c);
    cout << endl;
    cout << (a < b) || (b < c);
    cout << endl;
    cout << (a > b) || (b < c);
    cout << endl;

    return 0;
}