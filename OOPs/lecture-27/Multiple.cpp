#include <iostream>
using namespace std;
// Multiple Inheritance

class Animal
{
public:
    string name;
    void canEat()
    {
        cout << "Kha sakta hai ! ";
    }
};

class Dog
{
public:
    string name;
    void canBark()
    {
        cout << "Bhauk sakta hai ! ";
    }
};
class pitbull : public Dog, public Animal
{
public:
    string name;
    void setName(string p_name)
    {
        this->name = p_name;
    }
};
int main()
{
    pitbull p1;

    p1.canEat();
    p1.canBark();
    p1.setName("Aatank");
    cout << p1.name;
    return 0;
}