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

    void isEmpty(){

         if(this->count == 0){
            cout<<"Linked List is Empty ! ";
            return;
         }
    }
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
            this->count++;
        }

    }
    void addAtPos(int data, int pos){
        Node* newNode = new Node(data);
        Node* temp = head;

        for(int i = 0; i < pos - 1; i++){
            temp = temp->next;
        }
            newNode->next = temp->next;
            temp->next = newNode;
            this->count++;
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

        void updateValue(int data, int pos){
            Node* temp = head;
           isEmpty();

         for(int i = 0; i < pos; i++){
            temp = temp->next;
         }
         temp->data = data;
        }

        void deleteNodeAtStart(){
            Node* temp = head;
            isEmpty();
            head = head->next;
            delete temp;
            this->count--;
        }
        void deleteNodeAtEnd(){
            Node* temp = head;
            isEmpty();

            while(temp->next->next != nullptr){
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
            this->count--;
        }
        void deleteNodeAtPos(int pos){
            Node* temp = head;
            Node* temp2;
            isEmpty();

            if(pos == 0){
                head = head->next;
                delete temp;
                this->count--;
            }else{
                for(int i = 0; i < pos - 1; i++){
                temp = temp->next;
            }
            temp2 = temp->next->next;
            delete temp->next;
            temp->next = temp2;
            this->count--;
            }
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
        cout<<"\n5 for update value... : ";
        cout<<"\n6 for delete node at start... : ";
        cout<<"\n7 for delete node at end... : ";
        cout<<"\n8 for delete node at pos... : ";

        cout<<"\n0 for exit... : ";

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
                int pos, data;
                    cout<<"Enter position : ";
                    cin>>pos;
                    cout<<"Enter value : ";
                    cin>>data;

                    list.addAtPos(data, pos);
                break;
            }
            case 4:{

                list.viewAll();
               
                break;
            }
            case 5:{
                int data, pos;
                cout<<"Enter position : ";
                cin>>pos;
                cout<<"Enter value to update : ";
                cin>>data;
                list.updateValue(data, pos);
                break;
            }
            case 6:{
                list.deleteNodeAtStart();
                break;
            }
            case 7:{
                list.deleteNodeAtEnd();
                break;
            }
            case 8:{
                int pos;
                cout<<"Enter Position : ";
                cin>>pos;

                list.deleteNodeAtPos(pos);
                break;
            }
            case 0:{
                cout<<"Thank you ! ";
            }
        }
    }while(choice != 0);
return 0;
}