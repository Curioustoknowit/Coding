#include<bits/stdc++.h>
using namespace std;

string duplicate(string s){
   
    if(s.length()==0){
        return "";
    }
   
    char c=s[0];
    string ans = duplicate(s.substr(1));
   
    if(c == ans[0]){
        return ans;
    }
     return c+ans;
}

int main(){
    string s;
    getline(cin,s); // aaaabbbbccccdddd
   
    cout << duplicate(s); // abcd
   
    return 0;
}