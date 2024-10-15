#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "Enter num : ";
    cin >> n;

    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
    i = 1;
    cout << endl;
    while (n >= i)
    {
        cout << n << endl;
        n--;
    }
    return 0;
}