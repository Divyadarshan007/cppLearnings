#include <iostream>
using namespace std;
int main()
{
    int size, i, sum = 0;
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    for (i = 0; i < size; i++)
    {
        cout << "Enter value : ";
        cin >> arr[i];
    }
    for (i = 0; i < size; i++)
    {

        sum = sum + arr[i];
    }
    cout << sum / size;
    return 0;
}