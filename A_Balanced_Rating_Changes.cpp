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

    ll x,y,z=0,a=0;
    cin>>x;
    while(x--){
        cin>>y;
        if(y>0&&y%2!=0){if(a==0){cout<<y/2<<endl;a+=1;}else{cout<<y/2+1<<endl;a=0;}}
        else if(y<0&&y%2!=0){if(z==0){cout<<y/2<<endl;z+=1;}else{cout<<y/2-1<<endl;z=0;}}
        else{cout<<y/2<<endl;}
    }

   return 0;
}