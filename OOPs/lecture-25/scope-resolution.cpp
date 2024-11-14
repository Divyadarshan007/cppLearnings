#include <iostream>
using namespace std;

class Student
{
private:
    static int age;
    string name;
    int rollNo;

public:
    void setData()
    {
        cout << "Enter name : ";
        cin >> this->name;

        cout << "Enter roll no : ";
        cin >> this->rollNo;
    }
    void getData()
    {

        cout << "name : " << this->name << endl;
        cout << "age : " << this->age << endl;
        cout << "roll : " << this->rollNo << endl;
    }
};
int Student::age = 20;

int main()
{

    Student arr[2];

    for (int i = 0; i < 2; i++)
    {
        arr[i].setData();
    }

    for (int i = 0; i < 2; i++)
    {
        cout << endl;
        arr[i].getData();
    }

    return 0;
}