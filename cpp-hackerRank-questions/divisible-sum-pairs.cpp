#include<iostream>
using namespace std;
int main(){
  int count = 0;
  int k=3;
int ar[6]={1,3,2,6,1,2};
 for (int i = 0; i < 6; i++)
 {
    for(int j = i+1 ; j < 6; j++){
        
        if((ar[i] + ar[j]) % k == 0){
            count++;
        }
    }
 }
 
 
return count;
}
