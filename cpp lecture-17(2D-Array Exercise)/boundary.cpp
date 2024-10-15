#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter number of Rows : ";
    cin >> row;
    cout << "Enter number of Cols : ";
    cin >> col;

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
    cout << "First column : ";
    for (int num = 0; num < col; num++)
    {

        cout << arr[0][num] << " ";
    }
    cout << endl;
    cout << "Last column : ";
    for (int num = 0; num < col; num++)
    {

        cout << arr[col - 1][num] << " ";
    }
    cout << endl;
    cout << "First row : ";
    for (int num = 0; num < col; num++)
    {

        cout << arr[num][0] << " ";
    }
    cout << endl;
    cout << "Last row : ";
    for (int num = 0; num < col; num++)
    {

        cout << arr[num][col - 1] << " ";
    }
    cout << endl;

    return 0;
}