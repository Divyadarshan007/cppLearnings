#include<iostream>
using namespace std;

void divide(int);

int main(){
    int x;
    cout<<"Enter Value : ";
    cin>>x;

    divide(x);

 
return 0;
}
void divide(int a){
    if((a%3==0 && a%5==0)){
        cout<<"divisibel by 3 and 5";
    }else if ((a%3!=0 && a%5==0))
    {
        cout<<"divisibel by 5 not 3";
    }else if ((a%3==0 && a%5!=0))
    {
       cout<<"divisibel by 3 not 5";
    }else{
        cout<<"not divisibel by 3 and 5";
    }
    
    
}