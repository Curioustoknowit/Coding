#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n){
   
    if(n == 1){
        return true;
    }
   
    bool remaining = sorted(arr+1, n-1);
    return (arr[0]<arr[1] && remaining);
}

int main(){
    int n;
    cin >> n;
   
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   
    if(sorted(arr,n) == 1){
        cout << "It is a sorted array." << endl;
    }
    else{
        cout << "It is not a sorted array." << endl;
    }
   
    // cout << sorted(arr,n) << endl;
    return 0;
}