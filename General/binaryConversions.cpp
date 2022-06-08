#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int binaryTodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans += x*y;
        x *= 2;
        n = n / 10;
    }
    return ans;
}
int octalTodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans += x*y;
        x *= 8;
        n = n / 10;
    }
    return ans;
}
int hexadecimalTodecimal(string n){
    int ans=0;
    int x=1;
   
    int s = n.size();
   
    for (int i = s-1; i >= 0; i--) {
        if(n[i] >= '0' && n[i] <= '9'){
            ans += x * (n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int decimalToBinary(int n){
    int x=1;
    int ans=0;
   
    while(x<=n){
        x*=2;
    }
    x /= 2;
   
    while(x>0){
        int lastdigit=n/x;
        n -= lastdigit*x;
        x /= 2;
        ans=ans*10+lastdigit;
    }
    return ans;
}

int decimalToOctal(int n){
    int ans=0;
    int x = 1;
   
    while(x<=n){
        x*=8;
    }
    x/=8;
   
    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=8;
        ans=ans*10+lastdigit;
    }
    return ans;
}

string decimalToHexadecimal(int n){
    int x=1;
    string ans="";
   
    while(x<=n){
        x*=16;
    }
    x/=16;
   
    while(x>0){
        int lastdigit = n/x;
        n-=lastdigit*x;
        x/=16;
       
        if(lastdigit<=9){
            ans=ans+to_string(lastdigit);
        }
        else{
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
   
    // for binary and octal n will be in int and for hexadecimal it will be in string
    // cout<<binaryTodecimal(n)<<endl;
    // cout<<octalTodecimal(n)<<endl;
    cout<<decimalToHexadecimal(n)<<endl;
}