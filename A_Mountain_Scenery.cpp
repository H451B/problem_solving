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
    vector<pair<int,int>>v;
    x=(2*x)+1;
    f1(1,x){cin>>z;v.push_back(make_pair(i,z));}
    f1(1,x){if(y==0){break;}if((v[i].second)-1>v[i-1].second&&(v[i].second)-1>v[i+1].second){v[i].second=v[i].second-1;y-=1;}i+=1;}
    for(auto i:v){cout<<i.second<<" ";}

   return 0;
}