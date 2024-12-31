#include<iostream>
#include<stack>
using namespace std;
int main(){
 int num;
 stack<int> binaryStack;

 cout<<"Enter Number : ";
 cin>>num;

 while(num > 0){
    int rem = num % 2;
    binaryStack.push(rem);
    num = num / 2;
 }

 while(!binaryStack.empty()){
    cout<<binaryStack.top();
    binaryStack.pop();
 }

return 0;
}