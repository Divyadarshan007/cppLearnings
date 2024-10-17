#include <iostream>
using namespace std;
int main()
{
    int bill[4] = {3, 10, 2, 9};
    int k = 1;
    int b = 12;
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += bill[i];
    }

    sum = (sum - bill[k]) / 2;
    if (sum == b)
    {
        cout << "Bon Appetit";
    }
    else if (b > sum)
    {
        cout << b - sum;
    }
    else
    {
        cout << sum - b;
    }

    return 0;
}