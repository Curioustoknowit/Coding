#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
   
    int temp=n;
    int rev=0;
    while(n>0){
        int lastdigit = n%10;
        rev = rev*10+lastdigit;
        n=n/10;
    }
   
    cout<<temp;
   
    if(temp==rev){
        cout<<" is a palindrom number"<<endl;
    }
    else{
        cout<<" is not a palindrom number."<<endl;
    }
   
    return 0;
}