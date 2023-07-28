#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(ll i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

int main(){
    syncC;
    //io;

    ll x,y,z,a=0;
    vector<ll>v;
    cin>>x>>y;
    // if(x>y){swap(x,y);}
    // z=5*((x+y)/5);
    // f1(5,z){v.push_back(i);i+=4;}
     for(int i=1;i<=x;i++){
        a+=(y+(i%5))/5;
    }
    cout<<a;

   return 0;
}