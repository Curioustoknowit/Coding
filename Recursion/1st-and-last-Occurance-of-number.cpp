// 7 = n
// 4 2 1 2 5 2 7 = array
// 2 = key

#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[],int n,int i,int key){
    if(arr[i] == n){
        return -1;
    }
   
    if(arr[i] == key){
        return i;
    }
   
    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[],int n,int i,int key){
   
    if(i == n){
        return -1;
    }
   
    int last = lastocc(arr,n,i+1,key);
    if(last != -1){
        return last;
    }
    if(arr[i]==key){
        return i;
    }
   
    return -1;
}

int main(){
    int n;
    cin >> n;
   
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   
    int key,i=0;
    cin >> key;
   
    cout << "the first occurance of the given number is on: " << firstocc(arr,n,i,key) << endl;
    cout << "the last occurance of the given number is on: " << lastocc(arr,n,i,key);
   
    return 0;
}