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
ll z=0,r;
ll solve(ll x,ll y){
    if(x==1){return y-1;}
    if(x%2==0){z+=1;return r+solve(x/2,y)+solve(x/2,y);}
    else{z+=1; return r+solve(x/2,y)+solve(x/2+1,y);}
}

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    ll x,y;
    while(cin>>x>>y){
        z=0;r=0;
        ll p=solve(min(x,y),max(x,y));
        cout<<p+z<<endl;
    }

   return 0;
}