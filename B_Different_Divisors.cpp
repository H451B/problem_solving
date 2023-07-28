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

bool isPrime(ll n){
    if (n <= 1){return false;} 
    for (ll i=2; i<n; i++){
        if (n%i == 0){return false;}
    }
    return true; 
} 

void solve(){
    ll y,z,a,b;
    cin>>y;
    a=1+y;
    while(!isPrime(a)){
        a+=1;
    }
    b=a+y;
    while(!isPrime(b)){
        b+=1;
    }
    cout<<a*b<<endl;
}

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    ll x;
    cin>>x;
    while(x--){
        solve();
    }

   return 0;
}