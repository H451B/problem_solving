#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))
#define pb push_back
#define mp make_pair

int main(){
    syncC;
    //io;

    ll x,y,z=0,r=inf,l=0;
    vector<pair<ll,ll>>vp;
    string s;
    set<int>st;
    cin>>x>>s;
    f1(0,x-1){cin>>y;vp.pb(mp(y,s[i]));}
    f1(0,x-1){if(vp[i].second=='R'&&vp[i+1].second=='L'){r=min(r,vp[i+1].first-((vp[i].first+vp[i+1].first)/2));i+=1;}}
    if(r!=inf){cout<<r;}else{cout<<"-1";}

   return 0;
}