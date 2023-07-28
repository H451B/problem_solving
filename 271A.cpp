#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,c,d;
    cin>>n;
    for(int i=n+1;i<=9012;i+=1){
        a=i%10,b=(i/10)%10,c=((i/10)/10)%10,d=((i/10)/10)/10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
            cout<<d<<c<<b<<a;
            break;
        }
    }

   return 0;
}