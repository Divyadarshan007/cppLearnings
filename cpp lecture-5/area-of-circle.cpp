#include <iostream>
using namespace std;
int main()
{
    const float pi = 3.14;
    float n, area;
    cout << "Enter Radius : ";
    cin >> n;

    area = pi * n * n;
    cout << "Area of circle : " << area;
    return 0;
}