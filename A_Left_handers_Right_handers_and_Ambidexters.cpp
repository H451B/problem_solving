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

    ll x,y,z,l;
    cin>>x>>y>>z;
    //if(x==y){cout<<(x*2)+(z/2)*2;}
    if(min(x,y)+z>max(x,y)){cout<<max(x,y)*2+(((min(x,y)+z)-max(x,y))/2)*2;}
    else{cout<<(min(x,y)+z)*2;}

   return 0;
}