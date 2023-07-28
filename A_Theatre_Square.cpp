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

    ll x,y,z,a=1,b=1;
    cin>>x>>y>>z;
    if(x-z==z){a+=1;}
    else if(x-z>z){a+=ceil(double((x-z))/double(z));}
    else if(x-z<z&&x-z>0){a+=1;}
    if(y-z==z){b+=1;}
    else if(y-z>z){b+=ceil(double((y-z))/double(z));}
    else if(y-z<z&&y-z>0){b+=1;}
    //cout<<a<<" "<<b<<endl;
    cout<<ll(a*b);

   return 0;
}