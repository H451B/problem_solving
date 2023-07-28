#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)

int main(){
    syncC;
    //io;

    int x,y;
    map<int,int>mp;
    cin>>x;
    f1(0,x-1){
        cin>>y;
        mp[y]=i+1;
    }

    f1(0,x-1){cout<<mp[i+1]<<" ";}
   return 0;
}