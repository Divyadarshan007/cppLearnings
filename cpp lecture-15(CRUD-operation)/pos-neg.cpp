#include <iostream>
using namespace std;
int main()
{
    int i, pos = 0, neg = 0, zero = 0;
    int arr[10] = {1, 2, -1, 45, -3, 0, 64, 0, -9, 21};
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    cout << "Positive : " << pos << endl
         << "negative : " << neg << endl
         << "Zero : " << zero;
    return 0;
}
