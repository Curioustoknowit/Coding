#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
   
    char c[n+1];
    cin.getline(c, n);
    cin.ignore();
   
    int curlen = 0, maxlen = 0;
    int i = 0;
    int maxst = 0, st = 0;
    while(1){
       
        if(c[i] == ' ' || c[i] == '\0'){
            if(curlen > maxlen){
                maxlen = curlen;
                maxst = st;
            }
            curlen = 0;
            st = i + 1;
        }
        else{
            curlen++;
        }
       
        if(c[i]=='\0'){
            break;
        }
        i++;
    }
   
    cout<<maxlen<<endl;
   
    for (int i = 0; i < maxlen; i++) {
        cout<<c[i+maxst];
    }
   
    return 0;
}