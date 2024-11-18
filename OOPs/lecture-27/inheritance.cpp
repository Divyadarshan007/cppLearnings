#include <iostream>
using namespace std;
// single/simple Inheritance

class Animal
{
public:
    string name;
    void canEat()
    {
        cout << "Kha sakta hai ! ";
    }
};

class Dog : public Animal
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

    d1.canEat();
    d1.canBark();

    return 0;
}