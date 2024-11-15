#include <iostream>
using namespace std;

class Car
{
public:
    string name;

    void setData()
    {
        cout << "Enter name";
        cin >> this->name;
    }
    void getData()
    {
        cout << this->name;
    }

    Car()
    {
        cout << "Enter name";
        cin >> this->name;
    }

    Car(string hello)
    {
        cout << this->name;
        this->name = hello;
        cout << this->name;
    }

    ~Car()
    {
        cout << "Khatam Tata Bye Bye !";
    }
};
int main()
{
    Car c1, c2;
    string a;
    cin.ignore();
    cout << "Enter name macha ! ";
    getline(cin, a);
    Car c3(a);
    cout << c1.name;
    cout << c2.name;
    return 0;
}