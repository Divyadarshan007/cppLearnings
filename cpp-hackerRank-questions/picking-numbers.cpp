#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 2, 3, 1, 2};

    int num = 0, max = 0;

    for (int i = 0; i < 6; i++)
    {
        num = 0;
        for (int j = i; j < 6; j++)
        {
            if (abs(arr[i] - arr[j]) < 2)
            {
                num++;
                if (num > max)
                {
                    max = num;
                }
            }
        }
    }
    cout << max;

    return 0;
}
