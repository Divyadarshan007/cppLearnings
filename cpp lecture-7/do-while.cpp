#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, temp;
    cout << "Enter num : ";
    cin >> n;

    temp = n;

    do
    {
        cout << temp << endl;
        temp--;
    } while (temp >= i);

    do
    {
        cout << i << endl;
        i++;
    } while (i <= n);

    return 0;
}