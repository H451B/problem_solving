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

    ll x=0,y=0,z=0,a,b;
    cin>>a;
    f1(1,a){
        cin>>b;
        if(i%3==0){z+=b;}else if(i%3==2){y+=b;}else{x+=b;}
    }
    b=max(z,max(x,y));
    if(b==x){cout<<"chest";}else if(b==y){cout<<"biceps";}else{cout<<"back";}

   return 0;
}