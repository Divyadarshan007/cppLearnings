#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&,int,int, int);
void mergeSort(vector<int>&, int, int);

int main(){
 int n;
 cout<<"Enter N " ;
 cin>>n;
 vector<int>arr(n);
    for(int i = 0;i < n; i++){
        cout<<"Enter Value : ";
        cin>>arr[i];
    }

    mergeSort(arr, 0, n - 1);

   for(int val : arr){
    cout<<val<<" ";
   }
return 0;
}


void mergeSort(vector<int>&arr,int low,  int high){
    if(low >= high) return;

        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);

}
void merge(vector<int>&arr,int low, int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
//settlement of remaining element;
    while(left <= mid){
            temp.push_back(arr[left]);
            left++;
    }
    while(right <= high){
            temp.push_back(arr[right]);
            right++;
    }
//most imp
       
    for(int i = low; i <= high; i++){
            arr[i] = temp[i - low];
            cout<<temp[i]<< " ";         
   }
   
        

}