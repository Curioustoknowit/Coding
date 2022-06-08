#include<bits/stdc++.h>
using namespace std;

string yeswanth(string s){
   
    if(s.length()==0){
        return "";
    }
   
    char ch = s[0];
    string ans = yeswanth(s.substr(1));
   
    if(ch == 'x' || ch == 'X'){
        return ans+ch;
    }
   
    return ch+ans;
}

int main(){
    string s;
    getline(cin,s); // axxbdxfgcxxjk
   
    cout << yeswanth(s) << endl; // abdfgcjkxxxxx
}