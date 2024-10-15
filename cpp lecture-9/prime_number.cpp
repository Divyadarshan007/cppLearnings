#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "enter a number to find prime or not : ";
    cin >> n;

    for (i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "its not a prime number !";
            return 0;
        }
    }

    if (1)
    {
        cout << "Its a prime number !";
    }

    return 0;
}