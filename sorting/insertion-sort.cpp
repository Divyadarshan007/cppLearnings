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
    int j;
    for(int i = 1; i < size; i++){
        key = arr[i];
        j = (i - 1);
        while(j >= 0 && key < arr[j] ){
            arr[j + 1] = arr[j];
            j--; 
        }

        arr[j + 1] = key;
    }

    for(int val : arr){
    cout<<val<<" ";
    }

}