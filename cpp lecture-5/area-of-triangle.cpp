#include <iostream>
#define HALFVAL 0.5
using namespace std;
int main()
{
    float base, height, area;
    cout << "Enter value for base : ";
    cin >> base;

    cout << "Enter value for height : ";
    cin >> height;

    area = HALFVAL * base * height;
    cout << "Area of Triangle : " << area;
    return 0;
}