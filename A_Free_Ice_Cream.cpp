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

    ll x,y,b;
    string a;
    cin>>x>>y;
    ll z=y,c=0;
    f1(0,x-1){
        cin>>a>>b;
        if(a=="+"){
            z+=b;
        }else if(a=="-"&&b>z){
            c+=1;
        }else{
            z-=b;
        }
    }

    cout<<z<<" "<<c;

   return 0;
}