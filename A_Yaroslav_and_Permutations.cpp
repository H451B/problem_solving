#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
ll solve(){};

int main(){
    syncC;
    //io;

    ll x,y,z=0;
    map<int,int>mp;
    cin>>x;
    f1(0,x-1){
        cin>>y;
        mp[y]+=1;
    }
    for(auto i:mp){if(i.second>(x/2+x%2)){z=1;}}
    if(z==0){cout<<"YES";}else{cout<<"NO";}

   return 0;
}