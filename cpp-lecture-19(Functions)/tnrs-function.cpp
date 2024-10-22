#include <iostream>
using namespace std;

int add(int, int);
int sub(int, int);
int mul(int, int);
int divi(int, int);
int mod(int, int);
int getvalue(char);
int main()
{
    int choice;

    do
    {
        cout << "Enter Your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {

            // addition
            int a = getvalue('A');
            int b = getvalue('B');
            add(a, b);
        }
        break;
        case 2:
        {
            int a = getvalue('A');
            int b = getvalue('B');
            sub(a, b);
        }
        break;
        case 3:
        {
            int a = getvalue('A');
            int b = getvalue('B');
            mul(a, b);
        }
        break;
        case 4:
        {
            int a = getvalue('A');
            int b = getvalue('B');
            divi(a, b);
        }
        break;
        case 5:
        {
            int a = getvalue('A');
            int b = getvalue('B');
            mod(a, b);
        }
        break;
        case 0:
            cout << "Thank You ! ";
            break;
        default:
            cout << "Enter valid choice ! ";
            break;
        }

    } while (choice != 0);
    return 0;
}

int add(int a, int b)
{
    cout << " Ans : " << a + b;
    cout << endl;
}
int sub(int a, int b)
{
    cout << " Ans : " << a - b;
    cout << endl;
}
int mul(int a, int b)
{

    cout << " Ans : " << a * b;
    cout << endl;
}
int divi(int a, int b)
{

    cout << " Ans : " << a / b;
    cout << endl;
}
int mod(int a, int b)
{
    cout << " Ans : " << a % b;
    cout << endl;
}
int getvalue(char x)
{
    int a;
    cout << "Enter value of " << x << " : ";
    cin >> a;

    return a;
}