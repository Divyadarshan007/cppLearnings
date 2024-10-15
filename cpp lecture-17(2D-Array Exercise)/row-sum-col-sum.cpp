#include <iostream>
using namespace std;
int main()
{
    int row, col, sum = 0;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of cols : ";
    cin >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter value : ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int num = 0; num < col; num++)
    {
        sum += arr[num][0];
    }

    cout << endl;
    cout << "First row sum : " << sum;

    sum = 0;
    for (int num = 0; num < col; num++)
    {
        sum += arr[num][1];
    }

    cout << endl;
    cout << "Second row sum : " << sum;
    sum = 0;
    for (int num = 0; num < col; num++)
    {
        sum += arr[num][2];
    }

    cout << endl;
    cout << "Third row sum : " << sum;
    sum = 0;
    for (int num = 0; num < col; num++)
    {
        sum += arr[0][num];
    }

    cout << endl;
    cout << "First col sum : " << sum;
    sum = 0;
    for (int num = 0; num < col; num++)
    {
        sum += arr[1][num];
    }

    cout << endl;
    cout << "Second col sum : " << sum;
    sum = 0;
    for (int num = 0; num < col; num++)
    {
        sum += arr[2][num];
    }

    cout << endl;
    cout << "Third col sum : " << sum;

    return 0;
}