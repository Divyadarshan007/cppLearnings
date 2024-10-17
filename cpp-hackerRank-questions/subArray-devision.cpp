#include <iostream>
using namespace std;
int main()
{
    int s[5] = {2, 2, 1, 3, 2};
    int count = 0;
    int d = 4;
    int m = 2;

    for (int i = 0; i <= 5 - m; i++)
    {
        for (int j = i + 1; j <= i + m; j++)
        {
            if (5 == 1)
            {
                count++;
            }

            if (s[i] + s[j] == d)
            {
                if (count < m)
                    count++;
            }
        }
    }

    return count;
}