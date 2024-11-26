#include <iostream>
using namespace std;
// polymorphism
class Sum
{

private:
    int a, b;

public:
    void add() // method overloading
    {

        cout << "Enter value for a : ";
        cin >> this->a;

        cout << "Enter value for b : ";
        cin >> this->b;
        cout << "addition of " << this->a << " and " << this->b << " = " << this->a + this->b << endl;
    }

    void add(int a, int b) // method overloading
    {
        cout << "addition of " << a << " and " << b << " = " << a + b << endl;
    }

    void add(float a, float b) // method overloading
    {
        cout << "addition of " << a << " and " << b << " = " << a + b << endl;
    }
};

int main()
{
    Sum s1;

    s1.add();
    s1.add(10, 20);
    s1.add(1.5f, 1.5f);
    return 0;
}