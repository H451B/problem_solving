#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)

int main(){
    syncC;
    //io;

    int x,y,z,a=0,b,c=0;
    cin>>x>>y>>z;
    while(x--){
        cin>>b;
        a+=b;
        if(b>y){
            a-=b;
        }else if(a>z){
            c+=1;
            a=0;
        }
    }
    cout<<c;

   return 0;
}