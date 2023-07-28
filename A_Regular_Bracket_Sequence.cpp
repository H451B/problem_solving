#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(i,n,m) for(int i=n;i<=m;i+=1)
#define f2(i,n,m) for(int i=n;i>=m;i-=1)
#define f3(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
void solve(){
    string s;
    cin>>s;
    if(s.size()%2){cout<<"NO\n";}
    else if(s[0]==')'||s[s.size()-1]=='('){cout<<"NO\n";}
    else{cout<<"YES\n";}
}

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

     ll x;
     cin>>x;
     while(x--){solve();}

   return 0;
}