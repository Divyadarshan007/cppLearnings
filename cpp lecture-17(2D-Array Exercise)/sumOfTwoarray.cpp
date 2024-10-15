#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of cols : ";
    cin >> col;

    int arr[row][col];
    int arr2[row][col];
    int sum[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter value for first Array : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter value for second Array : ";
            cin >> arr2[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "First 2D Array \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Second 2D Array \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Sum of both Array \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << sum[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}