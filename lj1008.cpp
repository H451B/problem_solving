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
bool solve(ll i){
    ll y,a,b;
    cin>>y;
    a=ceil(sqrt(y));
    b=(a*a)-(a-1);
    if(y>b){}
    if(a%2!=0){
        if(y>b){cout<<"Case "<<i<<": "<<a-(y-b)<<" "<<a<<endl;}
        else if(y<b){cout<<"Case "<<i<<": "<<a<<" "<<a-(b-y)<<endl;}
        else{cout<<"Case "<<i<<": "<<a<<" "<<a<<endl;}
    }else{
        if(y>b){cout<<"Case "<<i<<": "<<a<<" "<<a-(y-b)<<endl;}
        else if(y<b){cout<<"Case "<<i<<": "<<a-(b-y)<<" "<<a<<endl;}
        else{cout<<"Case "<<i<<": "<<a<<" "<<a<<endl;}
    }
};

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    ll x;
    cin>>x;
    f1(i,1,x){
        solve(i);
    }

   return 0;
}