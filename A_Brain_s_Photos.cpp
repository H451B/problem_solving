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

    ll x,y,a=0;
    char z;
    set<char>st;
    cin>>x>>y;
    f1(1,x*y){cin>>z;st.insert(z);}
    for(auto i:st){if(i=='C'||i=='M'||i=='Y'){a+=1;}}
    if(a>0){cout<<"#Color";}else{cout<<"#Black&White";}

   return 0;
}