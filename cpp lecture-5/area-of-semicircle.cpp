#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
    float n, area;
    cout << "Enter radius ";
    cin >> n;
    area = 0.5 * PI * n * n;
    cout << "area of semicircle : " << area;

    return 0;
}