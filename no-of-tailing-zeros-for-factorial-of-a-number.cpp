#include<bits/stdc++.h>
using namespace std;

int main(){
    int res = 0, n;
    cin >> n;
   
    for (int i = 5; i <= n; i=i*5) {
        res = res + (n/i);
    }
    cout << res << endl;
   
    return 0;
}