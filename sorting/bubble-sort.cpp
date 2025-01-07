#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> arr(5);
 int n = arr.size();
 bool flag = false;
int count = 0;
 for(int i = 0; i < n; i++){
    cout<<"Enter Value : ";
    cin>>arr[i];
 }

 for(int val : arr){
    cout<<val<<" ";
}
cout<<endl;
 for(int i = 0; i < (n - 1); i++){
    for(int j = 0; j < (n - i - 1); j++){
        flag = false;
        if(arr[j] > arr[j + 1]){
            arr[j] = arr[j]^arr[j + 1];
            arr[j + 1] = arr[j]^arr[j + 1];
            arr[j] = arr[j]^arr[j + 1];
            flag = true;
        }
        count++;
    }
    if(!flag){
        break;
    }
 }

 for(int val : arr){
    cout<<val<<" ";
}
cout<<endl;
cout<<count;
return 0;
}