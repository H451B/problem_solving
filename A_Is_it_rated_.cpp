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

    ll x,y,z,a=0,b=0,c=0;
    cin>>x;
    x-=1;
    cin>>y>>z;b=y;
    if(z!=y){a+=1;}
    while(x--){
        cin>>y>>z;
        if(z!=y){a+=1;}
        if(b<y){c+=1;}
        b=y;
    }
    if(a>0){cout<<"rated"<<endl;}
    else if(c>0){cout<<"unrated"<<endl;}
    else{cout<<"maybe"<<endl;}

   return 0;
}