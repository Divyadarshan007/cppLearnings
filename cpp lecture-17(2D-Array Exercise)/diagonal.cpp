#include <iostream>
using namespace std;
int main()
{
    int row, col, sum = 0;
    cout << "Enter number of Rows : ";
    cin >> row;

    col = row;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << "Enter value : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "First diagonal : ";

    for (int num = 0; num < col; num++)
    {

        cout << arr[num][num] << " ";
    }
    cout << endl;
    cout << "Second diagonal : ";

    for (int num = 0; num < col; num++)
    {

        cout << arr[num][col - num - 1] << " ";
    }
    cout << endl;

    return 0;
}