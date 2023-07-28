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

ll sm(ll y){
    ll z=0;
    while (y!=0) {
        z=z+y%10;
        y=y/10;
    }
    return z;
}

int main(){
    syncC;
    //io;

    ll a,x,y=1,aa,bb;
    cin>>a;
    while(a--){
    y=1;
    map<ll,ll>mp;
    aa=0;bb=0;
    while (1){
        if (sm(y) == x) {
            //cout<<"\t"<<y<<endl;
            break;
        }
        y+=1;
    }
    //cout<<y<<endl;
    bb=y;
    while(y!=0){if(mp[y%10]==1){cout<<"-1\n";aa=22;break;}mp[y%10]=1;y/=10;}
    if(aa!=22){cout<<bb<<endl;}
    mp.clear();
    }

   return 0;
}
