#include <iostream>
using namespace std;
int main()
{
    int five = 5;

    int *ptr = &five;

    int **ptrptr = &ptr;

    int ***ptrToptr = &ptrptr;

    int ****hello = &ptrToptr;

    cout << ptr << " " << &ptr << " " << ptrptr << " " << &ptrptr << " " << ptrToptr << " " << &five << " " << &ptrToptr << " " << &hello << " " << hello;
    return 0;
}