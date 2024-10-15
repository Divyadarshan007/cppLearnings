#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;

    cout << "The value of A and B before swapping : " << a << " " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "The value of A and B after swapping : " << a << " " << b << endl;


    return 0;
}