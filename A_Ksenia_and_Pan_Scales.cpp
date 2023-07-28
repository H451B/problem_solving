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

    int i,a=0,b=0,c;
    string s,r,x,y;
    cin>>s>>r;
    for(i=0;i<s.size();i+=1){if(s[i]=='|'){break;}else{x+=s[i];}}
    for(i+=1;i<s.size();i+=1){y+=s[i];}
    for(i=0;i<r.size();i+=1){if(x.size()>y.size()){y+=r[i];}else if(x.size()<y.size()){x+=r[i];}else{x+=r[i];}}
    if(x.size()!=y.size()){cout<<"Impossible";}
    else{cout<<x<<"|"<<y;}

   return 0;
}