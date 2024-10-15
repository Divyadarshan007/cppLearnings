#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 1;
    cout << "Enter number : ";
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        sum *= i;
    }
    cout << "Factorial : " << sum;
    return 0;
}