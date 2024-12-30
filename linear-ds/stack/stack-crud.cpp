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
    cout<<"Value Pushed !"<<endl;

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
        cout<<this->ptr[i]<<" ";
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
 Stack stack(5);

 int choice;

 do{
    cout<<"1 for push..."<<endl;
    cout<<"2 for pop..."<<endl;
    cout<<"3 for peek..."<<endl;
    cout<<"4 for display..."<<endl;
    cout<<"5 for isEmpty ?..."<<endl;
    cout<<"6 for isFull ?..."<<endl;
    cout<<"7 for size..."<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice){
        case 1:{
            int data;
            cout<<"Enter value : ";
            cin>>data;
            stack.push(data);

            break;
        }
        case 2:{
            stack.pop();
            break;
        }
        case 3:{
            stack.peek();
            break;
        }
        case 4:{
            stack.display();
            break;
        }
        case 5:{
            stack.isEmpty();
            break;
        }
        case 6:{
            stack.isFull();
            break;
        }
        case 7:{
            stack.size();
            break;
        }
        case 0:{
            cout<<"Thank you !";
            break;
        }
        default:
        cout<<"Invalid Choice...";
    }
 }while(choice != 0);
return 0;
}
