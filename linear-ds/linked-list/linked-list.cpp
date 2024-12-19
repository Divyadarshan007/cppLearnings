#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};
int main(){
    Node *HEAD = new Node();
    HEAD->data = 50;
    HEAD->next = nullptr;
    
    cout<<"data : "<<HEAD->data<<"address : "<<HEAD->next<<" "<<HEAD<<endl; 

    Node *n2 = new Node();

    n2->data = 100;
    n2->next = nullptr;
    HEAD->next = n2;
    cout<<"data : "<<n2->data<<"address : "<<HEAD->next<<" "<<n2<<endl; 

    Node *n3 = new Node();

    n3->data = 200;
    n3->next = nullptr;
    n2->next = n3;
    cout<<"data : "<<n3->data<<"address : "<<n2->next<<" "<<n3; 
return 0;
}