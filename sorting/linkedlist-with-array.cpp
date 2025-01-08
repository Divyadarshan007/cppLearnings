#include<iostream>
using namespace std;
class Node{
    public:
    int arr[5];
    Node* next;

    Node(int arr[]){
        for(int i = 0; i < 5; i++){
            this->arr[i] = arr[i];
        }
        this->next = nullptr;
    }
};

class linkedList{
    public:
    Node* head = nullptr; 
    int count = 0;
           int arr[5];
  
    void addArray(){
     
         for(int i = 0; i < 5; i++){
            cout<<"enter value : ";
            cin>>arr[i];
        };
        
        Node* newNode = new Node(arr);
        newNode->next = head;
        head = newNode;
    }


    void display(){
        Node* temp = head;
        while(temp != nullptr){

          for(int i = 0; i< 5; i++) {
                cout<<temp->arr[i]<<" ";
          }
            cout<<"->";
            temp = temp->next;
        }
    }

};
int main(){

 
    linkedList list ;
    int count; 

    list.addArray();
    list.addArray();
  list.display();
 
return 0;
}