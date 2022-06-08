#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin, s);
   
    int a[26];
    for (int i = 0; i < 26; i++) {
        a[i]=0;
    }
   
    for (int i = 0; i < s.size(); i++) {
        a[s[i] - 'a']++;
    }
   
    char answer = 'a';
    int max = 0;
   
    for (int i = 0; i < 26; i++) {
        if(a[i] > max){
            max = a[i];
            answer = i + 'a';
        }
    }
   
    cout << answer << " " << max << endl;
   
    return 0;
}