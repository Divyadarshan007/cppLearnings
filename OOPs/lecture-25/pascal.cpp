#include <iostream>
using namespace std;
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int s = 1; s <= i; s++)
        {
            cout << "  ";
        }
        for (int j = i; j <= 5; j++)
        {
            cout << j << " ";
        }
        for (int k = 5 - 1; k >= i; k--)
        {
            cout << k << " ";
        }

        cout << endl;
    }
    return 0;
}