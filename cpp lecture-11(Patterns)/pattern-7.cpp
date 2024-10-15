#include <iostream>
using namespace std;
int main()
{
    int i, j, s;
    for (i = 5; i >= 1; i--)
    {

        for (s = 4; s >= i; s--)
        {
            cout << "  ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}