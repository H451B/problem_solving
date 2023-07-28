#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

int main(){
    syncC;
    //io;

    ll x,y,z;
    cin>>x>>y;
    vector<ll>v;
    map<ll,pair<ll,ll>>mp;
    f1(0,x-1){cin>>z;v.push_back(z);}
    sort(v.begin(),v.end());
    f1(0,x-1){for(int j=0;j<x;j+=1){mp[i]=make_pair(v[i],v[j]);}}
    cout<<mp[y].first<<" "<<mp[y].second;
    for(auto i:mp){cout<<i.first<<" ";}


   return 0;
}