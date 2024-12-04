#include <iostream>
using namespace std;
template <typename T1, typename T2>
class Demo
{
private:
    T1 *a;
    T2 *b;

public:
    Demo() {}
    Demo(T1 a, T2 b)
    {

        this->a = new T1;
        this->b = new T2;

        *this->a = a;
        *this->b = b;

        cout << *this->a + *this->b;
    }

    ~Demo()
    {
        delete this->a;
        a = NULL;
        delete this->b;
        b = NULL;

        if ((this->a == NULL) && (this->b == NULL))
        {
            cout << "Deleted Successfully";
        }
        else
        {
            cout << "kuch toh gadbad hai";
        }
    }
};
int main()
{
    Demo<double, int> d1(10.6, 20);


    return 0;
}