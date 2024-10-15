#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "enter number to find out sum of multiple of 3 or 5 : ";
    cin >> n;
    for (i = 1; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    cout << endl
         << sum;
    return 0;
}