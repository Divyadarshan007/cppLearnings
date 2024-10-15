#include <iostream>
using namespace std;
int main()
{
    int size, i, sum = 0;
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    int arr2[size];
    int arr3[size];
    for (i = 0; i < size; i++)
    {
        cout << "Enter value for first array : ";
        cin >> arr[i];
    }
    for (i = 0; i < size; i++)
    {
        cout << "Enter value for second array : ";
        cin >> arr2[i];
    }
    for (i = 0; i < size; i++)
    {

        arr3[i] = arr[i] + arr2[i];
    }
    for (i = 0; i < size; i++)
    {

        cout << arr3[i] << " ";
    }

    return 0;
}