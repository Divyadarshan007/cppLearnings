#include<iostream>
using namespace std;
int main(){
    int a;
    cout<< "Enter your first value";
    cin >>a;
    int b;
    cout<< "Enter your second value";
    cin >>b;

    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    int div = a/b;
    cout << sum <<endl;
    cout << sub <<endl;
    cout << mul <<endl;
    cout << div <<endl;
    return 0;
}