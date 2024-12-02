#include <iostream>
using namespace std;
int main()
{

    int a = 7;

    int *x = new int; // New keyword is used to allocate memory in heap section
    *x = 5;

    cout << *x;

    delete x; // Delete keyword is used to delete the value stored in the variable
    x = NULL; // In this way we can delete the address of the variable also
    cout << *x;

    return 0;
}