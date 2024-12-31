#include<iostream>
#include<stack>
using namespace std;

int main(){
 stack<char> palindromeStack;
 string val;
 bool flag = true;
    cout<<"Enter String : ";
    cin>>val;

    for(char ch : val){
        palindromeStack.push(ch);
    } 
    for(char ch : val){
        if(ch != palindromeStack.top()){
            flag = false;
        }
        palindromeStack.pop();
    }
    flag == true ? cout<<"It is a palindrome " : cout<<"it is not a palindrome ";
return 0;
}