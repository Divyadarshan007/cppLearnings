#include<iostream>
using namespace std;

class Stack{
    private:
    char *ptr;
    int volume;
    int top;
    int count;

    public:

    Stack(int volume){
        this->volume = volume;
        this->ptr = new char[volume];
        this->top = -1;
        this->count = 0;
    }
    void push(char);
    void pop();
    char peek();
    void display();
    void isEmpty();
    void isFull();
    void size();

};

void Stack::push(char data){
    if(this->top == volume - 1){
        cout<<"stack is full..."<<endl;
        return;
    }
    this->top++;
    this->ptr[top] = data;
    this->count++;

}
void Stack::pop(){
    if(this->top == -1){
        cout<<"Stack is empty..."<<endl;
        return;
    }
    this->ptr[top] = 0;
    this->top--;
    this->count--;
}
char Stack::peek(){
    return this->ptr[top];

}
void Stack::display(){
    
    for(int i = top; i >=0; i--){
        cout<<this->ptr[i];
    }
    cout<<endl;
}
void Stack::isEmpty(){
    if(this->top == -1){
        cout<<"Stack is empty !"<<endl;
    }else{
        cout<<"Stack is not empty !"<<endl;
    }
}
void Stack::isFull(){
    if(this->top == volume - 1){
        cout<<"Stack is Full !"<<endl;
    }else{
        cout<<"Stack is not Full !"<<endl;
    }
}
void Stack::size(){
    cout<<"The current size of stack is : "<<this->count<<endl;
}
int main(){
 Stack palindromeStack(25);
 string str;
bool flag = true;
    cout<<"Enter string : ";
    cin>>str;

        for(char ch : str){
            palindromeStack.push(ch);
        }
        for(char ch : str){
            if(ch != palindromeStack.peek()){
                flag = false;
            }
            palindromeStack.pop();
        }

        flag == true ? cout<<"It is a palindrome" : cout<<"It is not a palindrome ";
return 0;
}
