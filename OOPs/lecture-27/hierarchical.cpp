#include <iostream>
using namespace std;
// Hierarchical Inheritance

class Dog
{
public:
    string name;
    void canEat()
    {
        cout << "Kha sakta hai ! ";
    }
};

class Pug : public Dog
{
public:
    string name;
    void canBark()
    {
        cout << "Bhauk sakta hai ! ";
    }
};
class pitbull : public Dog
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
    Pug p2;

    p1.canEat();
    p2.canEat();
    p2.canBark();
    

    return 0;
}