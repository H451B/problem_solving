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

    ll x,y,z,r;
    map<ll,ll>mp;
    cin>>x;
    while(x--){
        cin>>y;
        r=0;
        while(y--){
            cin>>z;
            r+=z;
            mp[z]+=1;
        }
        if(r%2!=0){cout<<"NO\n";}
        else if(mp[1]%2==0&&mp[2]%2==0||mp[1]==0&&mp[2]%2==0||mp[2]==0&&mp[1]%2==0){cout<<"YES\n";}
        else if(mp[2]%2!=0&&mp[1]>1){
            mp[2]+=2;mp[1]-=2;
            if(mp[1]%2==0){cout<<"YES\n";}
        }
        else{cout<<"NO\n";}
        mp.clear();
    }

   return 0;
}