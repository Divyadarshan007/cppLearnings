#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int p = 4;
    int count = n / 2;
    int count2 = p / 2;
    int num = count - count2;
    if (num < count2)
    {
        cout << num;
    }
    else
    {
        cout << count2;
    }

    return 0;
}