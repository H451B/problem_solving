#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

int main(){
    syncC;
    //io;
    //[8th's circle 8 4 2 6] = 4
    ll x,z=8;
    map<int,int>mp;
    mp[1]=8;mp[2]=4;mp[3]=2;mp[0]=6;
    cin>>x;
    if(x==0){cout<<"1";}
    else{cout<<mp[x%4];}

   return 0;
}