#include <iostream>
using namespace std;
class Shape
{

private:
    float rectangle;
    float square;
    float circle;

public:

Shape(){}

     Shape(float a, float b)
    {
        cout<<a*b;
    }
    int setSquare(float l)
    {
        return l * l;
    }
    int setCircle(float a)
    {
        return 3.14 * (a * a);
    }
};
int main()
{
    Shape s1, s2, s3;

    cout << s1.setCircle(2) << endl;
    
    return 0;
}
