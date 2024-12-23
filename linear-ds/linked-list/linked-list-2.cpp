#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


};
int main(){
    Node* HEAD = new Node();
    HEAD->data = 100;
    HEAD->next = nullptr;


    Node* current = new Node();
    current->data = 200;
    current->next = nullptr;
    HEAD->next = current;

    current = new Node();
    current->data = 400;
    current->next = nullptr;

    HEAD->next->next = current;
    Node* ptr = HEAD; 
    while(ptr != nullptr){
        cout<<"data : "<<ptr->data<<" "<<ptr->next<<endl;
        ptr = ptr->next; 
    }
return 0;
}