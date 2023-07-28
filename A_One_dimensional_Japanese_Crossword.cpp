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

    ll x,y=0;
    vector<int>v;
    string s;
    cin>>x>>s;
    f1(0,s.size()-1){if(s[i]=='B'){y+=1;}else{if(y>0){v.push_back(y);y=0;}}}
    if(y>0){v.push_back(y);}
    cout<<v.size()<<endl;
    for(auto i:v){cout<<i<<" ";}

   return 0;
}