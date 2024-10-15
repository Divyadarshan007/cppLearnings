#include <iostream>
using namespace std;
int main()
{
    int n, num = 1, count = 0;
    cout << "enter nth number to find prime number : ";
    cin >> n;
    bool flag = true;
    while (count < n) // count 5 < 5
    {
        num++; // 11
        for (int i = 2; i * i < num; i++)
        {
            flag = true;
            if (num % i == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            count++;
        }
    }
    cout << num << endl;
    return 0;
}
//