#include <iostream>
using namespace std;
int main()
{
    int i, j, s;
    for (i = 5; i >= 1; i--)
    {
        for (s = 1; s <= i; s++)
        {
            cout << "  ";
        }
        for (j = 5; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}