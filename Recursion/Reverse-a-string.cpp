#include<bits/stdc++.h>
using namespace std;

void reverses(string s){
   
    if(s.length()==0){
        return;
    }
   
    string res = s.substr(1);
    reverses(res);
    cout << s[0];
}

int main(){
    string s;
    getline(cin,s);
   
    cout << endl;
   
    reverses(s);
   
    return 0;
}