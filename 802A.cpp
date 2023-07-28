#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin>>x;
    while(x--){
        long long y,z,r,c=0;
        cin>>y>>z;
        r=(z*(z+1))/2;
        for(long long i=z;i<=y*z;i+=z){
            c+=i;
        }
        cout<<r+c-z<<endl;
    }
    return 0;    
}