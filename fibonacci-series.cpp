#include<iostream>
using namespace std;

int main(){
    int n;
    int a = 0, b = 1, count = 2;
    cin >> n;
    
    while(count <= n){
        int temp = b;
        b = b + a;
        a = temp;
        count++;
    }
    
    cout << b << endl;
    
}