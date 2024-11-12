#include <iostream>
using namespace std;

class Employee
{
public:
    int empNo;
    string empName;
    string empDep;
    string empSalary;
};

int main()
{
    Employee emp1, emp2, emp3, emp4, emp5;

    emp1.empNo = 1;
    emp1.empName = "Suraj Pandey";
    emp1.empDep = "IT-Frontend Developer";
    emp1.empSalary = "$5000";

    emp2.empNo = 2;
    emp2.empName = "Kaushal Prajapati";
    emp2.empDep = "IT-Backend Developer";
    emp2.empSalary = "$5000";

    emp3.empNo = 3;
    emp3.empName = "Divyadarshan Das";
    emp3.empDep = "IT-Full Stack Engineer";
    emp3.empSalary = "$5000";

    emp4.empNo = 4;
    emp4.empName = "Vinit Patel";
    emp4.empDep = "Human Resources";
    emp4.empSalary = "$5000";

    emp5.empNo = 5;
    emp5.empName = "Rishi Das";
    emp5.empDep = "Manager";
    emp5.empSalary = "$5000";

    cout << emp1.empNo << " ";
    cout << emp1.empName << " ";
    cout << emp1.empDep << " ";
    cout << emp1.empSalary << " ";
    cout << endl;
    cout << endl;

    cout << emp2.empNo << " ";
    cout << emp2.empName << " ";
    cout << emp2.empDep << " ";
    cout << emp2.empSalary << " ";
    cout << endl;
    cout << endl;

    cout << emp3.empNo << " ";
    cout << emp3.empName << " ";
    cout << emp3.empDep << " ";
    cout << emp3.empSalary << " ";
    cout << endl;
    cout << endl;

    cout << emp4.empNo << " ";
    cout << emp4.empName << " ";
    cout << emp4.empDep << " ";
    cout << emp4.empSalary << " ";
    cout << endl;
    cout << endl;

    cout << emp5.empNo << " ";
    cout << emp5.empName << " ";
    cout << emp5.empDep << " ";
    cout << emp5.empSalary << " ";

    return 0;
}