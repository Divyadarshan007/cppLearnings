#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42}, val, count = 0, num = 0;
    val = arr[0];
    int lowestRecord = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (lowestRecord > arr[i])
        {
            num++;
        }
        if (val < arr[i])
        {
            val = arr[i];
            count++;
        }
    }

    cout << count << " " << num;
    return 0;
}