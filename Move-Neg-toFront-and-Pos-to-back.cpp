#include<iostream>
using namespace std;

void replace(int arr[], int s, int e){
   
    while(s<=e){
        if(arr[s]<0 && arr[e]<0){
            s++;
        }
        else if(arr[s] > 0 && arr[e] < 0){
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
        else if(arr[s]>0 && arr[e] >0){
            e++;
        }
        else{
            s++;
            e--;
        }
    }
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}

int main(){
    int n;
    cin >> n;
   
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
   
    replace(arr, 0, n-1);
    print(arr,n-1);
   
    return 0;
}