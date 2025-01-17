#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
void display(vector<int>&);
void linearSearch(vector<int>&, int, int);
int main(){
    int n, key;
    cout<<"Enter n : ";
    cin>>n;

    vector<int>arr(n);

    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100;
    }

    display(arr);

    cout<<"Enter key to find : ";
    cin>>key;
    linearSearch(arr,n,key);
return 0;
}
void linearSearch(vector<int>& arr, int n, int key){
    int count = -1;
    for(int i = 0; i < n; i++){
        if(key == arr[i]){
           count = i;
            break;
        }
    }

    if(count != -1){
        cout<<"Element found !";
    }else{
        cout<<"Element not found !";

    }
}
void display(vector<int>& arr){
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
}