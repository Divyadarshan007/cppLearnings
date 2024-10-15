#include <iostream>
using namespace std;
int main()
{
    int row, col, sum = 0;
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
            sum += arr[i][j];
        }
        cout << endl;
    }
    cout << "Average of Array : " << (float)sum / (row * col);

    return 0;
}