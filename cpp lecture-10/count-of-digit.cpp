#include <iostream>
using namespace std;
int main()
{
    int i, n, count = 0, rem;
    cout << "Enter digits : ";
    cin >> n;
    while (n != 0)
        for (i = 1; i <= n; i++)
        {
            rem = n % 10;
            count++;
            n = n / 10;
        }
    cout << count;
    return 0;
}