#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(i) cout<<"test "<<i<<endl;
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

    ll x;
    cin>>x;
    while(x--){
        ll y,z,a=0,b=0,d=0;
        vector<ll>v;
        map<ll,ll>mp,pm;
        cin>>y;
        for(ll i=0;i<y;i+=1){
            cin>>z;
            v.push_back(z);
        }
        if(v.size()==1){cout<<0<<endl;continue;}
        for(ll i=v.size()-2;i>-1;i-=1){
            if(v[i]>v[i+1]&&a==0){
                mp[v[i]]=1;
                a+=1;
                b+=1;
                d=i-1;
            }
            if(a>0&&mp[v[i]]!=1){b+=1;mp[v[i]]=1;}
        }
        ll e=0;
        for(ll i=0;i<v.size();i+=1){
            if(pm[v[i]]!=1 && mp[v[i]]!=1){e+=1;pm[v[i]]=1;mp[v[i]]=1;}
            if(mp[v[i]]==1&&pm[v[i]]==0){b+=e;e=0;}
        }
        cout<<b<<endl;
    }

   return 0;
}