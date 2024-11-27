#include <iostream>
using namespace std;
// polymorphism
class Sum
{

protected:
    void add()
    { // protected key word specialization

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
};

int main()
{
    Divi d1;

    d1.add(); // this error is good for health

    return 0;
}