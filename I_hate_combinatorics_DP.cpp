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

ll arr[1000001],xx=0;
ll result(ll a,ll b){
    if(arr[b]==1){return arr[b];}
    if(b>=a){xx+=1;return 1;}
    arr[b]=result(a,b+1)*result(a,b+2);
    return arr[b];
}

ll solve(){
    //memset(arr,-1,sizeof(arr));
    ll y;
    cin>>y;
    //f1(i,0,y-1){arr[i]=-1;}
    //result(y-1,0);
    cout<<y-1<<endl;
}

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    ll x;
    cin>>x;
    //fill_n(arr,1000001,-1);
    while(x--){solve();}

   return 0;
}