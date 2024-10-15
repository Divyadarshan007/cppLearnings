#include <iostream>
using namespace std;
int main()
{
    int i, start_yr, end_yr, count = 0;
    cout << "Enter start year : ";
    cin >> start_yr;
    cout << "Enter end year : ";
    cin >> end_yr;

    if (start_yr > end_yr)
    {
        start_yr = start_yr + end_yr;
        end_yr = start_yr - end_yr;
        start_yr = start_yr - end_yr;
    }

    if (start_yr % 4 == 0)
    {
        for (i = start_yr; i <= end_yr; i += 4)
        {
            if ((i % 4 == 0) && (i % 100 != 0 || i % 400 == 0))
            {
                cout << i << " ";
            }
            count++;
        }
        cout << endl
             << "count : " << count;
    }
    else
    {

        start_yr = start_yr + (4 - (start_yr % 4));
        for (i = start_yr; i <= end_yr; i += 4)
        {
            if ((i % 4 == 0) && (i % 100 != 0 || i % 400 == 0))
            {
                cout << i << " ";
            }
            count++;
        }

        cout << endl
             << "count : " << count;
    }
    return 0;
}