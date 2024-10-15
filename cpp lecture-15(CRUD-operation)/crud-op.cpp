#include <iostream>
using namespace std;
int main()
{

    int i, size, choice, num = 0;
    cout << "Enter the value of array : ";
    cin >> size;
    int arr[size] = {};
    do
    {
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // create
            if (num >= size)
            {
                cout << "Ye to Gelat hai : ";
                break;
            }
            int value;
            cout << "Enter value to insert : ";
            cin >> value;
            arr[num] = value;
            num++;
            break;
        case 2:
            // read

            for (int val : arr)
            {
                cout << val << " ";
            }
            break;
        case 3:
            // update

            int bam, tam;

            cout << "Enter the value to update : ";
            cin >> bam;
            cout << "Enter the position to replace te value : ";
            cin >> tam;
            if (tam > size)
            {
                cout << "Chal Nikal ! ";
                break;
            }
            cout << "Your Updated value : " << bam;
            arr[tam] = bam;

            break;
        case 4:
            // delete
            if (num <= 0)
            {
                cout << "Chal Nikal !";
                break;
            }
            num--;
            int v;
            v = arr[num];
            cout << "Your Deleted value : " << v;
            arr[num] = 0;

            break;
        case 5:
            cout << "Chal Nikal !";
            break;
        default:
            cout << "Chal Nikal !";
            break;
        }

    } while (choice != 5);
    return 0;
}