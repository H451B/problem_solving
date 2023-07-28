#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x,a=0,b,c=9;
    cin>>x;
    long long y=x;
    while(x/10!=0){
        a+=9;
        c=(c*10)+9;
        x=x/10; 
    }
    c=(c-9)/10;
    b=y-c;
    c=b%10;
    while(b/10!=0){
        b=b/10;
        c+=b%10;
    }
    cout<<a+c;

    return 0;
}