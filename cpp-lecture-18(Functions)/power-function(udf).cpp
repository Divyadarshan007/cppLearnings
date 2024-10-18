#include <iostream>
using namespace std;

void power(float, float);

int main()
{
    int a, b, sum = 0;

    cout << "Enter number and its power : ";
    cin >> a >> b;

    power(a, b);
    return 0;
}

void power(float a, float b)
{
    int sum = 1;
    for (int i = 1; i <= b; i++)
    {
        sum *= a;
    }
    cout << sum;
}