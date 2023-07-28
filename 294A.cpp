#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=0;i<n;i+=1)

int main(){
    CStream;
    int x,y,a,b;
    map<int,int>mp;
    cin>>x;
    f1(x){
        cin>>y;
        mp[i+1]=y;
    }
    cin>>y;
    f1(y){
        cin>>a>>b;
        mp[a+1]+=mp[a]-b,mp[a-1]+=b-1,mp[a]=0;
    }
    f1(x){cout<<mp[i+1]<<endl;}

   return 0;
}