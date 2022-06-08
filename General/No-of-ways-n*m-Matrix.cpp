#include<iostream>
#include<algorithm>
using namespace std;

int matrix(int n, int m){
    if(n == 1 || m == 1){
        return 1;
    }
    return matrix(n-1,m) + matrix(n,m-1);
}

int main(){
    int n, m;
    cin >> n >> m;
   
    cout << matrix(n, m);
   
    return 0;
}