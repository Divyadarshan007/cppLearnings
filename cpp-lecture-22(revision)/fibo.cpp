#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, ans, start, end;

    cout << "Enter start : ";
    cin >> start; // 3
    cout << "Enter end : ";
    cin >> end; // 7

    int len = (end - start) + 1;

    int arr[len]; // 0 1 2 3 4 5

    for (int i = start; i < end; i++)
    {
        ans = a + b;
        arr[i - start] = ans;
        a = b;
        b = ans;
    }

    for (int i = start - 3; i < end; i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}
