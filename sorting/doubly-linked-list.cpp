#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class LinkedList{
    public:
    Node* head = nullptr;

    void addValue(){
        int data;
        cout<<"Enter value : ";
        cin>>data;
        Node* newNode = new Node(data);
        newNode->next = head;
       if(head != nullptr){
         head->prev = newNode;
       }
        head = newNode; 
    }
    void displayHeadToTail(){
        Node* temp = head;

        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    void displayTailToHead(){
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp->prev;
        }

    }
};
using namespace std;
int main(){
    LinkedList list;
  

    list.addValue();
    list.addValue();
    list.addValue();
    cout<<endl;
    list.displayHeadToTail();
    cout<<endl;
    list.displayTailToHead();
 
return 0;
}