#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(i,n,m) for(int i=n;i<=m;i+=1)
#define f2(i,n,m) for(int i=n;i>=m;i-=1)
#define f3(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
bool solve(){};

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    ll x,y,z,a=-9,b;
    cin>>x;
    map<ll,ll>mp,pm;
    while(x--){
        cin>>y;
        f1(i,1,y){
            cin>>z;
            pm[z]=i;
            mp[z]+=1;
        }
        for(auto i:mp){if(i.second==1){cout<<pm[i.first]<<endl;}}
        mp.clear();
        pm.clear();
    }

   return 0;
}