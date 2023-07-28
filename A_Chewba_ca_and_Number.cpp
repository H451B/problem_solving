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

    ll x;
    string s;
    cin>>s;
    f1(0,s.size()){if(s[i]-48>=5&&s[i]-48<10){s[i]=(9-(s[i]-48))+48;}}
    if(s[0]=='0'){s[0]='9';}
    cout<<s;

   return 0;
}