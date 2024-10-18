#include <iostream>
using namespace std;
int main()
{
    int n = 100;
    int a = 0, b = 1, c = 0, sum = 0;
    for (long i = 0; i < n; i++)
    {

        c = a + b; // 1
        a = b;     //
        b = c;     //

        if ((c % 2 == 0) && (c < n))
        {
            sum += c;
        }
    }
    cout << sum << endl;

    return 0;
}