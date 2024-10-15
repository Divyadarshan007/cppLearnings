#include <iostream>
using namespace std;
int main()
{

    int n = 100;
    bool flag = true;
    for (int i = 2; i < n; i++)
    {
        flag = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {

            cout << i << " ";
        }
    }
    return 0;
}