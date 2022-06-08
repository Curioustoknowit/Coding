// Unique number in an array where all numbers except one, are present thrice-Bit Manipulation

#include<bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos){
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos){
    return (n | (1 << pos));
}

int unique(int arr[], int n){
    int result = 0;
   
    for (int i = 0; i < 64; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if(getBit(arr[j], i)){
                sum++;
            }
        }
       
        if(sum % 3 != 0){
            result = setBit(result, i);
        }
    }
   
    return result;
}

int main(){
    // int n;
    // cin >> n;
   
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
   
    cout << unique(arr, 10);
   
    return 0;
}