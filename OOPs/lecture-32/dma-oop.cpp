#include <iostream>
using namespace std;

class Demo
{
private:
    int *arr;

public:
    Demo()
    {
        cout << "Object Created" << endl;
    }
    Demo(int a)
    {

        this->arr = new int;
        *arr = a;
        cout << *arr << endl;
    }
    ~Demo()
    {
        delete arr;
        arr = NULL;

        if (arr == NULL)
        {
            cout << "Object Terminated" << endl;
        }
        else
        {
            cout << "it is not empty";
        }
    }
};

int main()
{
    Demo d1(10); // stack area

    Demo *d2;
    d2 = new Demo(20); // heap area

    delete d2;
    d2 = NULL;

    return 0;
}