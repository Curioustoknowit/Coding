#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
   
    int temp=n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
   
    if(sum==temp){
        cout<<"it is a armstrong number"<<endl;
    }
    else{
        cout<<"it is not a armstrong number"<<endl;
    }
   
    return 0;
}