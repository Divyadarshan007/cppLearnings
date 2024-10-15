    #include <iostream>
using namespace std;
int main()
{
    int start, end, i;
    cout << "enter start and end number from 2 to n : ";
    cin >> start >> end;
    if (start == 1)
    {
        return 0;
    }
    bool flag = true;
    for (i = start; i < end; i++)
    {
        for (int j = 2; j * j < i; j++)
        {
            flag = true;
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << i << " ";
        }
    }

    return 0;
}