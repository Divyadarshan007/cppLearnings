#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 4, 4, 4, 5, 3};
    int temp[5] = {}, maxVal = 0, maxId = 0;

    for (int val : arr)
    {
        temp[val]++;
    }

    for (int val : temp)
    {
        cout << val;
    }

    for (int i = 1; i <= 5; i++)
    {
        if (maxVal < temp[i])
        {
            maxId = i;
            maxVal = temp[i];
        }
    }

    return maxId;
}
