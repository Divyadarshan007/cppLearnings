#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "likh bhai jaldi panvel nikalna hai : ";
    cin >> size;
    int arr[6]={8,5,6,2,7,3}, sum = 0, num = 1;

    for (int val = 0; val < size; val++)
    {
        cout << "Enter value : ";
        cin >> arr[val];
    }

    for (int i = 0; i < 6; i++) 
    {

        for (int j = i + 1; j <= 6; j++)
        {

            if (arr[i] + arr[j] == 10)
            {
                cout << "pair found : " << arr[i] << " , " << arr[j] << endl;
            }
        }

        num++;
    }
    return 0;
}
