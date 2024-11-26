#include <iostream>
using namespace std;
// polymorphism
class Sum
{
protected:
    int a, b, res;

public:
    void add() // method overloading
    {
        cout << "Enter value for a : ";
        cin >> this->a;

        cout << "Enter value for b : ";
        cin >> this->b;
        res = this->a + this->b;
        cout << res << endl;
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

class Sub : public Sum
{
private:
    int a, b;

public:
    void add()
    {
        Sum::add(); // method overriding
        cout << "hello world " << endl;
    }
    void sub(int a, int b)
    {
        Sum::add();
        res = res - 2;
        cout << endl
             << res;
    }
};

int main()
{

    Sub s1;

    s1.sub(10, 20);
    return 0;
}