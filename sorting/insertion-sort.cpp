#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>, int);

int main(){
    vector<int> arr(6);
    int n = arr.size();
 for(int i = 0; i < n; i++){
    cout<<"Enter value : ";
    cin>>arr[i];
 }

 insertionSort(arr, n);

 
return 0;
}
void insertionSort(vector<int> arr, int size){
    int key;
    int prev;
    for(int i = 1; i < size; i++){
        key = arr[i];
        prev = (i - 1);
        while(prev >= 0 && key < arr[prev]){
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = key;
    }

    for(int val : arr){
    cout<<val<<" ";
    }

}