#include <iostream>
using namespace std;
int main()
{
    int a, b, i, sum = 1;
    cout << "enter number : ";
    cin >> a;
    cout << "enter power : ";
    cin >> b;
    for (i = 1; i <= b; i++)
    {
        sum *= a;
    }
    cout << endl
         << "Ans : " << sum;
    return 0;
}
