#include <iostream>
using namespace std;
int main()
{
    int size, i, count = 0;
    cout << "Enter the size of Array : ";
    cin >> size;
    int arr[size];

    for (i = 0; i < size; i++)
    {
        cout << "Enter year : ";
        cin >> arr[i];
    }
    for (i = 0; i < size; i++)
    {
        if ((arr[i] % 4 == 0 && arr[i] % 100 != 0) || (arr[i] % 400 == 0))
        {
            count++;
        }
    }

    cout << count;

    return 0;
}