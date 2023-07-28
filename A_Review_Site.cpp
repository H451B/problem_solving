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

    ll x,y,z;
    cin>>x;
    while(x--){
        cin>>y;
        ll a=0,b=0,c=0;
        f1(i,0,y){cin>>z;if(z==1){a+=1;}else if(z==2){b+=1;}else{c+=1;}}
        if(a>=b){cout<<(a+c)-b<<endl;}
        else if(a<b){cout<<(a+c)-b<<endl;}
        else{cout<<c<<endl;}
    }

   return 0;
}