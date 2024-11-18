#include <iostream>
using namespace std;
// Hybrid Inheritance

class Animal
{
public:
    string name;
    void canEat()
    {
        cout << "Kha sakta hai ! ";
    }
};

class Pug : public Animal
{
public:
    string name;
    void setName(string p_name)
    {
        this->name = p_name;
    }
};
class Pitbull : public Animal
{
public:
    string name;
    void setName(string p_name)
    {
        this->name = p_name;
    }
};

class Dog : public Pitbull, public Pug
{
public:
    string name;
    void canBark()
    {
        cout << "Bhauk sakta hai ! ";
    }
};
int main()
{
    Dog d1;
    d1.canBark();
    d1.Pug::setName("ghevj");
    cout << d1.Pug::name;
    d1.Pitbull::setName("hash");
    cout << d1.Pitbull::name;
    d1.Pug::canEat();
    d1.Pitbull::canEat();

    return 0;
}