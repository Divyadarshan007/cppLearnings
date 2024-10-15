#include <iostream>
using namespace std;
int main()
{
    int s[1] = {4};
    int d = 4;

    int m = 1, count = 0;

    for (int i = 0; i < 1; i++)
    {
        for (int j = i + 1; j <= m; j++)
        {
            cout << "hello";
            if (size == 1)
            {
                count++;
                return 0;
            }
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