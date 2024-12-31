#include<iostream>
using namespace std;

class Stack{
    private:
    int *ptr;
    int volume;
    int top;
    int count;

    public:

    Stack(int volume){
        this->volume = volume;
        this->ptr = new int[volume];
        this->top = -1;
        this->count = 0;
    }
    void push(int);
    void pop();
    void peek();
    void display();
    void isEmpty();
    void isFull();
    void size();

};

void Stack::push(int data){
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
    cout<<"Value Popped !"<<endl;

}
void Stack::peek(){
    cout<<"Value at top is : "<<this->ptr[top]<<endl;

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
 Stack binaryStack(25);
 int num;

    cout<<"Enter number : ";
    cin>>num;

while (num > 0)
{
    int rem = num % 2;
    binaryStack.push(rem);
    num = num / 2;
}

binaryStack.display();
return 0;
}
