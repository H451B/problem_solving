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

    ll x=3,y,z;
    vector<ll>v;
    cin>>z;
    while(z--){
        while(x--){cin>>y;v.push_back(y);}
        sort(v.begin(),v.end(),greater<ll>());
        if(v[0]==v[1]){cout<<"YES\n"<<v[0]<<" "<<v[2]<<" 1"<<endl;}else{cout<<"NO"<<endl;}
        v.clear();
        x=3;
    }

   return 0;
}