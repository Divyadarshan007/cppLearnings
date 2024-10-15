#include <iostream>
using namespace std;
int main()
{
    int s[5] = {1, 1, 1, 1, 1};
    int d = 3;

    int m = 2, count = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (s[i] + s[j] == d)
            {
                if (count < m)
                    count++;
            }
        }
    }
    cout << count;
    return 0;
}