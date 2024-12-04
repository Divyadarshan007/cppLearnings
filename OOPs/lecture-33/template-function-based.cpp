#include <iostream>
using namespace std;
template <typename T1, typename T2>

void demo(T1 x, T2 y)
{
    cout << x + y;
}
int main()
{

    demo<double, int>(10.6, 20);
    return 0;
}