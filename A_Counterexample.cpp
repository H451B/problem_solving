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
    cin>>x>>y;
    if(x%2!=0){x+=1;}
    if(x+2>y){cout<<"-1";}
    else{cout<<x<<" "<<x+1<<" "<<x+2;}

   return 0;
}