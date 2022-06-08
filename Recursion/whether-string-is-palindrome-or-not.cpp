#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool strPalindrome(string str, int s, int e){
    if(s>=e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    return strPalindrome(str, s+1,e-1);
}

int main(){
    string s;
    getline(cin, s);
   
    cout << strPalindrome(s, 0, s.length()-1);
   
    return 0;
}