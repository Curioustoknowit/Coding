#include<bits/stdc++.h>
using namespace std;

void subsets(char arr[],int n){
    int count = -1;
    for (int i = 0; i < (1<<n); i++) {
        for (int j = 0; j < n; j++) {
            if( i & (1<<j) ){
                cout << arr[j] << " ";
            }
        }
        cout << endl;
        count++;
    }
    cout << "Total no of subsets are: " << count;
}

int main(){
    int n;
    cin >> n;
   
    char arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   
    subsets(arr,n);
   
    return 0;
}