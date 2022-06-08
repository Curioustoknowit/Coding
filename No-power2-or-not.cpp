#include<bits/stdc++.h>
using namespace std;

bool bitManipulation(int n){
    return (n && !( n & n-1 ));
}

int main(){
   
    int n;
    cin >> n;
   
    if(bitManipulation(n) == true){
        cout << n << " is a power of 2." << endl;
    }
    else{
        cout << n << " is not a power of 2." << endl;
    }
   
    return 0;
}