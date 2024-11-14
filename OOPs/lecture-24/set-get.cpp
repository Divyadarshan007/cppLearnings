#include <iostream>
using namespace std;

class Student
{
private:
    int age;
    string name;
    int rollNo;
    string course;

public:
    void setData()
    {
        cout << "Enter Your Name : ";
        getline(cin, this->name);
        cout << "Enter Your Age : ";
        cin >> this->age;
        cout << "Enter Your Roll No : ";
        cin >> this->rollNo;
        cin.ignore();
        cout << "Enter Your Course : ";
        getline(cin, this->course);
    }

    void getData()
    {
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "Roll No : " << this->rollNo << endl;
        cout << "Course : " << this->course << endl;
    }
};

int main()
{

    Student s1, s2, s3;
    s1.setData();
    s3 = s1;
    s3.getData();

    return 0;
}