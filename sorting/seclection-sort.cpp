#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>&, int);
void swap(int*, int*);
int main(){
    vector<int> arr(5);
    int n = arr.size();

    for(int i = 0; i < n; i++){
        cout<<"Enter value : ";
        cin>>arr[i];
    }
    cout << endl;

    selectionSort(arr, n);

    for(int val : arr){
        cout<<val<<" ";
    }
return 0;
}

void swap(int &a, int &b){
    a=  a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void selectionSort(vector<int> &arr, int size){
    for(int i = 0; i < size; i++){
        int min = i;
        for(int j = (i + 1); j < size; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }   

        if(min != i){
            swap(arr[min], arr[i]);
        }
    }
}