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

    ll x,y,z;
    cin>>x;
    while(x--){
        cin>>y>>z;
        ll arr[y][y],a,b;
        vector<pair<ll,ll>>vp,vp1;
        f1(0,z-1){cin>>a>>b;arr[a][b]=100;vp.push_back(make_pair(a,b));}
        f1(0,y-1){arr[i][i]=99;vp1.push_back(make_pair(i,i));}

    }

   return 0;
}