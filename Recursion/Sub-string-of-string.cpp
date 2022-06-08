#include<bits/stdc++.h>
using namespace std;

void sub(string s,string ans){
   
    if(s.length()==0){
        cout << ans << endl;
        return;
    }
   
    char c = s[0];
    string ch = s.substr(1);
   
    sub(ch,ans);
    sub(ch,ans + c);
   
}

int main(){
    string s;
    getline(cin,s);
   
    sub(s,"");
    cout << endl;
   
    return 0;
}