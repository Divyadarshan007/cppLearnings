#include <iostream>
using namespace std;
int main()
{

    int n, i, size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];

    for (i = 0; i < size; i++)
    {

        cout << "Enter value : ";
        cin >> arr[i];
    }

    cout << "Enter the position : ";
    cin >> n;

    if (n > size)
    {
        return 0;
    }
    for (i = n; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    for (i = 0; i < n; i++)
    {   
        cout << arr[i] << " ";
    }

    return 0;
}