#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if ((i <= 7 && j == 1) || (i <= 7 && j == 7) || (i == 1 && j <= 6) || (i == 7 && j <= 6))
            {
                cout << "4 ";
            }
            else if ((i == 2 && j <= 6) || (i == 6 && j <= 6) || (i <= 5 && j == 2) || (i <= 5 && j == 6))
            {
                cout << "3 ";
            }
            else if ((i == 4 && j == 4))
            {
                cout << "1 ";
            }
            else
            {
                cout << "2 ";
            }
        }
        cout << endl;
    }
    return 0;
}