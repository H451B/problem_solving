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
    vector<ll>v;
    vector<pair<ll,ll>>vp;
    map<ll,ll>mp;
    cin>>x;
    while(x--){
        cin>>y;
        v.push_back(-1);
        ll a=0;
        while(y--){
            cin>>z;
            if(v[a]!=z){mp[z]+=1;}
            a+=1;
            v.push_back(z);
        }
        if(v[1]==v[v.size()-1]){mp[v[1]]-=1;}
        map<ll, ll> :: iterator it;
        for (it=mp.begin(); it!=mp.end(); it++){
            if(it->first!=v[1]&&it->first!=v[v.size()-1]){it->second++;}
        }
        for (it=mp.begin(); it!=mp.end(); it++){
            vp.push_back(make_pair(it->first, it->second));
        }
        sort(vp.begin(), vp.end(), sortSec);
        if(vp.size()==1){cout<<0<<endl;}
        else{
            cout<<vp[0].second<<endl;
        }
        v.clear();
        vp.clear();
        mp.clear();
    }

   return 0;
}