#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "enter first value";
    cin >> a;
    cout << "enter second value";
    cin >> b;
    cout << "before" << a << " " << b << endl;
    c = a;
    a = b;
    b = c;

    cout << "after" << a << " " << b << endl;
    return 0;
}