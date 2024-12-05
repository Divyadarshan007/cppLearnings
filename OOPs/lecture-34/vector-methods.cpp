#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr;

    arr.push_back(10); // push_back to add element from last index
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);

    cout << arr.size() << endl; // to get the size of vectoor array

    arr.pop_back();            // pop_back to delete element from last index
    arr.at(2) = 100;           // at() to reassign value at specific position
    cout << arr.at(2) << endl; // at() to print the value from specific position

    cout << arr.front() << endl; // front() to print the starting value of vector array
    cout << arr.back() << endl;  // back() to print the end value of vector array

    // arr.empty();//empty() to check whether the vector is empty or not (it will return boolean value)
    // arr.clear();//clear() to clear or delete whole vector array

    cout << *(arr.begin()) << " ";    // begin() points to starting index
    cout << *(arr.end() - 1) << endl; // end() points to ending index

    arr.insert(arr.begin(), 30);           // insert() with one value at specific position
    arr.insert(arr.begin(), {30, 60, 90}); // insert() with multiple value at specific position

    arr.erase(arr.begin() + 2); // erase() to erase from specific position

    for (int val : arr)
    {
        cout << val << " ";
    }
    return 0;
}