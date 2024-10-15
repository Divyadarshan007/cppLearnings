#include <iostream>
using namespace std;
int main()
{
    int n, k, mod;
    cout << "Enter first value : ";
    cin >> n;
    cout << "Enter second value : ";
    cin >> k;
    mod = n % k;
    cout << "Reminder for " << n << " / " << k << ": " << mod;
    return 0;
}
