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

    ll x,y,z,a,b,c,d;
    vector<ll>v;
    cin>>x;
    while(x--){
        cin>>y;
        f1(0,y-1){
            cin>>z;
            v.push_back(z);
        }
        a=0;b=0;c=0;
        ll mx=-1;
        for(int i=y-1;i>-1;i-=1){
            if(v[i]+i<=y-1){v[i]+=v[v[i]+i];}
            mx=max(mx,v[i]);
        }
        cout<<mx<<endl;
        v.clear();
    }

   return 0;
}