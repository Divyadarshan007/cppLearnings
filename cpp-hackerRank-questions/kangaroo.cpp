#include <iostream>
using namespace std;
int main()
{
    int x1, x2, v1, v2;
    if (v1 <= v2)
    {
        cout << "NO";
    }
    if ((x2 - x1) % (v1 - v2) == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
