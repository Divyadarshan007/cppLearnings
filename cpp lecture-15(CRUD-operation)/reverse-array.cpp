#include <iostream>
using namespace std;
int main()
{
    int i, size, pos, num = 0;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];
    int arr2[size];
    cout << "Enter position : ";
    cin >> pos;

    for (i = 0; i < size; i++)
    {
        cout << "Enter value : ";
        cin >> arr[i];
    }

    for (i = pos; i < size; i++)
        arr2[num++] = arr[i];

    for (i = 0; i < pos; i++)
        arr2[num++] = arr[i];
        
    for (int val : arr2)
        cout << val << " ";

    return 0;
}