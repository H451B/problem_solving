#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(int j=n;j<=m;j+=1)
#define sq(a) ((a)*(a))

int main(){
    syncC;
    //io;

    ll x,y=0,z=0,r=0;
    cin>>x;
    f1(1,x){
        f2(1,x){
            if(j<=(x/2)+1+y&&j>=(x/2)+1-y){cout<<"D";}
            else{cout<<"*";}
        }
        if(y<x/2&&r==0){y+=1;}else{y-=1;r=1;}
        cout<<endl;
    }

   return 0;
}