#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class linkedList{
    public:

    Node* head = nullptr; 
    int count = 0;


    void addAtBegin(int data){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        this->count++;
    }
    void addAtEnd(int data){
        Node* newNode = new Node(data);
        if(this->count == 0){
            this->head = newNode;
        }else{
            Node* temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }

            temp->next = newNode;

        }

    }
    void addAtPos(int data, int pos){

    }
    void viewAll(){
         Node* temp = head;

         if(this->count == 0){
            cout<<"Linked List is Empty ! ";
            return;
         }
            while(temp != nullptr){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"Null";
    }
};
int main(){
    linkedList list;
    int count; 

int choice;

    do{
        cout<<"\n1 for add at begin... : ";
        cout<<"\n2 for add at End... : ";
        cout<<"\n3 for add at position... : ";
        cout<<"\n4 for add at View All... : ";
        cout<<"\n5 for exit... : ";

        cout<<"\nEnter your choice : ";
        cin>>choice;

        switch(choice){
            case 1:{

                int data;

                cout<<"enter the value : ";
                cin>>data;

                list.addAtBegin(data);
                break;
            }
            case 2:{
                int data;
                cout<<"enter the value : ";
                cin>>data;

                list.addAtEnd(data);
                break;
            }
            case 3:{
                break;
            }
            case 4:{

                list.viewAll();
               
                break;
            }
            case 5:{
                break;
            }
        }
    }while(choice != 5);
return 0;
}