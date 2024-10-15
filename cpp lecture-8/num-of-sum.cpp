#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "Enter number : ";
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        sum = sum + i;
    }
    cout << "sum of number is : " << sum;
    return 0;
}