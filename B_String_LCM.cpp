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

    ll x,y,z,a,b,c,d,kk;
    string s,r,t;
    cin>>z;
    while(z--){
    cin>>s>>r;
    kk=1;
    x=(s.size()*r.size())/(__gcd(s.size(),r.size()));
    if(s.size()>=r.size()){
        f1(i,0,x-1){t+=r[i%r.size()];}
    }else{
        f1(i,0,x-1){t+=s[i%s.size()];}
    }
    f1(i,0,t.size()-1){
        if((t[i]!=s[i%s.size()])||(t[i]!=r[i%r.size()])){kk=0;break;}
    }
    
    if(kk==1){cout<<t<<endl;}
    else{cout<<"-1\n";}
    t.clear();
    }

   return 0;
}
