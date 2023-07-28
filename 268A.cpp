#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=0;i<n;i+=1)
#define f2(m) for(int j=0;j<x;j+=1)

int main(){
    CStream;

    int x,y,z;
    cin>>x;
    map<int,pair<int,int>>mp;
    f1(x){
        cin>>y>>z;
        mp[i]=make_pair(y,z);
    }
    z=0;
    f1(x){
        f2(x){
            if(mp[i].first==mp[j].second){
                z+=1;
            }
        }
    }
    cout<<z;

   return 0;
}