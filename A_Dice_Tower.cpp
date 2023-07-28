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

    ll x,y,z,a,b=0;
    cin>>x>>y;
    f1(1,x){cin>>z>>a;if(z==y||z==7-y){cout<<"NO";b=1;break;}
                      else if(a==y||a==7-y){cout<<"NO";b=1;break;}}
    if(!b){cout<<"YES";}

   return 0;
}