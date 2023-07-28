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

    ll x,y,z;
    cin>>x;
    while(x--){
        cin>>y;
        ll a[y],b=y-1,c=0,d=0,e=0;
        vector<ll>v;
        f1(0,y-1){
            cin>>z;
            v.push_back(z);
        }
        sort(v.begin(),v.end(),greater <>());
        for(auto i:v){d+=i;if(d==0){cout<<"NO\n";e=1;break;}}
        if(e==0){cout<<"YES\n";for(auto i:v){cout<<i<<" ";}cout<<endl;}
        v.clear();
    }

   return 0;
}