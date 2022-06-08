#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   
    char c[n+1];
    cin>>c;
   
    bool flag = 1;
   
    for (int i = 0; i < n; i++) {
        if(c[i] != c[n-i-1]){
            flag = 0;
            break;
        }
    }
   
    if(flag==true){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
   
    return 0;
}