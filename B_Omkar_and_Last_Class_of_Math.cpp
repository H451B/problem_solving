#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(ll i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

ll lcm(ll n) {
   for (int i=2; i*i<=n;i++) {
      if (n%i==0) {
         return n/i;
      }
   }
   return -1;
}

int main(){
    syncC;
    //io;

    ll x,y,z,a,b;
    cin>>x;
    while(x--){
        cin>>y;
        if(lcm(y)==-1){cout<<1<<" "<<y-1<<endl;}
        else{cout<<lcm(y)<<" "<<y-lcm(y)<<endl;}
    }
    

   return 0;
}