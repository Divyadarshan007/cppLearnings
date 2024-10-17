#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {10, 20, 60, 10, 30, 10, 40, 10, 30}, count = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (arr[i] == 0 && arr[j] == 0)
            {
                break;
            }
            if (arr[i] == arr[j])
            {
                count++;
                arr[i] = 0;
                arr[j] = 0;
            }
        }
    }
    cout << count;
    return 0;
}