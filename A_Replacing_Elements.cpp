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

    ll x,y,z,a,b,c,d;
    vector<ll>v;
    cin>>x;
    while(x--){
        cin>>y>>z;
        d=-1;
        f1(i,0,y-1){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        if(v[0]+v[1]<=z||v[y-1]<=z){cout<<"YES\n";}
        else{cout<<"NO\n";}
        v.clear();
    }

   return 0;
}