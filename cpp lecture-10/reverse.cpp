#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0, rem, temp;
    cout << "Entern number : ";
    cin >> n;
    temp = n;
    for (; n != 0;)
    {
        rem = n % 10; // rem = 1
        sum = (sum * 10) + rem;
        n = n / 10;
    }
    cout << sum;

    return 0;
}