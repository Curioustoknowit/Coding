#include<iostream>
using namespace std;

int partation(int *arr, int s, int e){
    int i=s-1;
    int j=s;
   
    int p=arr[e];
   
    for(;j<=e-1;j++){
        if(arr[j]<=p){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[e]);
    return i+1;
}

void quickSort(int *arr,int s, int e){
   
    if(s>=e){
        return;
    }
   
    int pi = partation(arr, s, e);
   
    quickSort(arr, s, pi-1);
    quickSort(arr, pi+1, e);
}

int main(){
    int n;
    cin >> n;
   
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   
    quickSort(arr, 0, n-1);
   
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
   
    return 0;
}