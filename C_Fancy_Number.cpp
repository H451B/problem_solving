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
    ll x,y;
    string s;
    cin>>x>>y;
    vector<ll>v(x);
    cin>>s;
    f1(0,x-1){v[i]=0;}
    f1(0,x-1){v[i]=s[i]-48;}
    sort(v.begin(),v.end(),greater <>());
    f1(0,x-1){cout<<v[i]<<" ";}



   return 0;
}