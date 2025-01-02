#include<iostream>
using namespace std;

class Queue{
    private:
    int* arr;
    int front;
    int rear;
    int volume;
    int count;
    public:
    
    Queue(int size){
        this->arr = new int[size];
        this->volume = size;
        this->front = -1;
        this->rear = -1;
        this->count = 0;
    }


       void Enqueue ();
       void Dequeue ();
       void getFront ();
       void getRear ();
       void Display ();
       void isEmpty ();
       void isFull ();
       void Size ();
    
};

    void Queue::Enqueue(){
            int data;
            cout<<"Enter value : ";
            cin>>data;
            if(this->rear == volume - 1){
                cout<<"Queue is Full ! "<<endl;
                return;
            }
        if(this->front == -1 && this->rear == -1){
            this->front++;
            this->rear++;
            this->arr[rear] = data;
        }else{
            this->rear++;
            this->arr[rear] = data;
        }
            this->count++;
 }
    void Queue::Dequeue(){
            if(this->rear == -1 && this->front == - 1){
                cout<<"Queue is Empty ! "<<endl;
                return;
            }
        
            if(this->front == this->rear){
                this->arr[front] = 0;
                this->front = -1;
                this->rear = -1;
            }else{
                this->arr[front] = 0;
                this->front++;
            }
            this->count--;
 }
    void Queue::getFront(){
      if(this->rear == -1 && this->front == - 1){
                cout<<"Queue is Empty ! "<<endl;
                return;
        }

        cout<<"The front Element is : "<<this->arr[front]<<endl;
  }
    void Queue::getRear(){
      if(this->rear == -1 && this->front == - 1){
                cout<<"Queue is Empty ! "<<endl;
                return;
        }

        cout<<"The rear Element is : "<<this->arr[rear]<<endl;
  }
    void Queue::Display (){
      if(this->rear == -1 && this->front == - 1){
                cout<<"Queue is Empty ! "<<endl;
                return;
            }

            for(int i = front; i <= rear; i++){
                cout<<this->arr[i]<<" ";
            }
            cout<<endl;
 }
    void Queue::isEmpty (){
        (this->rear == -1 && this->front == - 1) ? cout<<"Queue is Empty ! "<<endl : cout<<"Queue is not Empty"<<endl;
}
    void Queue::isFull(){
        (this->rear == volume - 1) ? cout<<"Queue is Full ! " <<endl: cout<<"Queue is not Full"<<endl;
}
    void Queue::Size (){
    cout<<"The current size of Queue is : "<<this->count<<endl;
 }


int main(){
    Queue q(5);
    int choice;

 do{
    cout<<"1 for Enqueue "<<endl;
    cout<<"2 for Dequeue "<<endl;
    cout<<"3 for Front "<<endl;
    cout<<"4 for Rear "<<endl;
    cout<<"5 for Display "<<endl;
    cout<<"6 for isEmpty "<<endl;
    cout<<"7 for isFull "<<endl;
    cout<<"8 for Size "<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice){
        case 1:{
            q.Enqueue();
            break;
        }
        case 2:{
            q.Dequeue();
            break;
        }
        case 3:{
            q.getFront();
            break;
        }
        case 4:{
            q.getRear();
            break;
        }
        case 5:{
            q.Display();
            break;
        }
        case 6:{
            q.isEmpty();
            break;
        }
        case 7:{
            q.isFull();
            break;
        }
        case 8:{
            q.Size();
            break;
        }
        case 0:
        cout<<"Thank you !";
    }
 }while(choice != 0);
return 0;
}