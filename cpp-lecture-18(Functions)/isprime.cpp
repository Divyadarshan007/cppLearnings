#include <iostream>
using namespace std;

int isprime(int);

int main()
{
    int a;
    cout << "Enter any number : ";
    cin >> a;

    isprime(a);
    return 0;
}
int isprime(int a)
{

    bool flag = true;
    for (int i = 2; i < a; i++)
    {
        flag = true;
        if (a % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "It is a prime number !";
    }
    else
    {
        cout << "It is not a prime number !";
    }
}