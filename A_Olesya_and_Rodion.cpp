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
    ll z[x];
    if(y==10){z[0]=1;}else{z[0]=y;}
    f1(1,x-1){if(y==10){z[i]=0;}else{z[i]=y;}}
    if(y==10&&x==1){cout<<"-1";}else{f1(0,x-1){cout<<z[i];}}

   return 0;
}