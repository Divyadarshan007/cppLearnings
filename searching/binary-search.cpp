#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int binarySearch(vector<int>&, int, int, int);
void sort(vector<int>&, int);
void display(vector<int>);
int main(){
    int n, key;

    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100;
    }
    display(arr);
    sort(arr, n);
    display(arr);
    cout<<"Enter key to find : ";
    cin>>key;

int idx = binarySearch(arr, 0, n - 1, key);

    if(idx == -1){
        cout<<"Element not found !";
    }else{
        cout<<"Element found at index "<<idx;
    }
return 0;
}
int binarySearch(vector<int>& arr, int low, int high, int key){
    if(low >= high) return -1;

    int mid = (low + high) / 2;
    if(key == arr[mid]){
        return mid;
    }else if(key < arr[mid]){   
        binarySearch(arr, low, mid - 1, key);
    }else{
        binarySearch(arr, mid + 1, high, key);
    }

}
void display(vector<int> arr){
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
}
void sort(vector<int>& arr, int n){

  
    for(int i = 0; i < (n - 1); i++){
    for(int j = 0; j < (n - i - 1); j++){

        if(arr[j] > arr[j + 1]){
            arr[j] = arr[j]^arr[j + 1];
            arr[j + 1] = arr[j]^arr[j + 1];
            arr[j] = arr[j]^arr[j + 1];
       
        }
        
    }
   
 }
}