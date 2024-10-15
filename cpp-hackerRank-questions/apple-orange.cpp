#include <iostream>
using namespace std;
int main()
{
    int samStart = 7, samEnd = 11, locationApple = 5, locationOrange = 15, apples[3] = {-2, 2, 1}, oranges[2] = {5, -6}, count1 = 0, count2 = 0;

    for (int i = 0; i < 3; i++)
    {
        if (locationApple + apples[i] >= samStart && locationApple + apples[i] <= samEnd)
        {
            count1++;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        if (locationOrange + oranges[i] >= samStart && locationOrange + oranges[i] <= samEnd)
        {
            count2++;
        }
    }

    cout << count1 << " " << count2;

    return 0;
}
