#include <iostream>
using namespace std;
int main()
{
    int a, b, option;

    do
    {
        cout << "enter 1 for addition\nenter 2 for subtraction\nenter 3 for multiplication\nenter 4 for division\nenter 5 to exit !\nenter any option : ";
        cin >> option;

        if (option == 5)
        {
            return 0;
        }
        cout << "enter number a and b : ";
        cin >> a >> b;

        switch (option)
        {
        case 1:
            cout << "Ans : " << a + b << endl;
            break;
        case 2:
            cout << "Ans : " << a - b << endl;
            break;
        case 3:
            cout << "Ans : " << a * b << endl;
            break;
        case 4:
            cout << "Ans : " << a / b << endl;
            break;
        case 5:
            cout << "";
        default:
            cout << "enter valid option !\n ";
        }

    } while (option != 5);
    return 0;
}