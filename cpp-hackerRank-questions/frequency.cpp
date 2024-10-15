#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int ar[size];
    int freq[10] = {};

    for (int i = 0; i < size; i++)
    {
        cout << "Enter value : ";
        cin >> ar[i];
    }

    for (int val : ar)
    {
        freq[val]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] != 0)
        {
            cout << i << " -> " << freq[i] << endl;
        }
    }
    return 0;
}