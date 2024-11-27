#include <iostream>
using namespace std;
// polymorphism
class Sum
{

private:
    int a, b;

public:
    virtual void add() // method overloading
    {

        cout << "hello";
    }
};

class Divi : public Sum
{

public:
    void addition(int a, int b)
    {
        cout << a + b;
    }
    void add()
    {
        cout << "world";
    }
};

int main()
{
    Sum *s1; // pointer object
    Divi d1;
    // s1.add();
    s1 = &d1;
    d1.addition(10, 20);
    s1->add();

    return 0;
}