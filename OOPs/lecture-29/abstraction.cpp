#include <iostream>
using namespace std;
class India
{
public:
    virtual void add() = 0;
};

class Pak : public India
{
public:
    void add()
    {
        cout << "hello world !";
    }
};
int main()
{
    Pak p1;
    p1.add();

    return 0;
}