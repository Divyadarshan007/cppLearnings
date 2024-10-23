#include <iostream>
using namespace std;

void change(int *, int *);
int main()
{
    int a, b;
    a = 15;
    b = 45;
    cout << a << endl;
    cout << b << endl;
    change(&a, &b);
    cout << a << endl;
    cout << b << endl;

    return 0;
}
void change(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}