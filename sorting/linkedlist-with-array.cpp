#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    vector<int> arr;
    Node* next;

    Node(vector<int> arr){
        this->arr = arr;
        this->next = nullptr;
    }
};

class linkedList{
    public:
    Node* head = nullptr; 
    int count = 0;
  
    void addArray(){
        int  size;
        cout<<"Enter the size of an array : ";
        cin>>size;
        
        vector<int> arr(size);
     
         for(int i = 0; i < size; i++){
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

          for(int i = 0; i < temp->arr.size(); i++) {
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