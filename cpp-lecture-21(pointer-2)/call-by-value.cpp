#include <iostream>
using namespace std;

void change(int);
int main()
{
    int a;

    a = 15;
    cout << a << endl;
    change(a);
    cout << a << endl;

    return 0;
}
void change(int a)
{
    a = 10;
}