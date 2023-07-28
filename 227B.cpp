#include <bits/stdc++.h>
using namespace std;
 
#define f1(n) for(int i=0;i<n;i+=1)
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m,x,a=0,b=0;
    map<int,int>mp;
    cin>>n;
    f1(n){
        cin>>x;
        mp[x]=i+1;
    }
    cin>>m;
    f1(m){
        cin>>x;
        a+=mp[x];
        b+=n-mp[x]+1;
    }
    cout<<a<<" "<<b<<"\n";

    return 0;
}