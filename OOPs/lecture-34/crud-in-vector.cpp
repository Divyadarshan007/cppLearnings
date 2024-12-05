#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> box;
    int choice;
    do
    {
        cout << "\n1 for add : ";
        cout << "\n2 for view : ";
        cout << "\n3 for update : ";
        cout << "\n4 for delete : ";
        cout << "\n5 for exit : ";
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            // add
            int val;

            cout << "Enter value : ";
            cin >> val;

            box.push_back(val);
            break;
        }
        case 2:
        {
            // view
            if (box.empty())
            {
                cout << "Array is empty ! ";
                break;
            }
            for (int val : box)
            {
                cout << val << " ";
            }
            break;
        }
        case 3:
        {
            // update

            int idx, val, temp;
            cout << "Enter index : ";
            cin >> idx;
            cout << "Enter value : ";
            cin >> val;
            temp = box[idx];
            box.at(idx) = val;

            cout << "The updated value is " << temp << " with " << val;
            break;
        }
        case 4:
        {
            // delete
            int idx, temp;
            cout << "Enter index : ";
            cin >> idx;
            temp = box.at(idx);
            box.erase(box.begin() + idx);

            cout << "The deleted value is " << temp;
            break;
        }

        case 5:
        {
            cout << "Thank You ! ";
        }
        }

    } while (choice != 5);
    return 0;
}