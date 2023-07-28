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

    map<char,int>mp;
    mp['T']=4;mp['C']=6;mp['O']=8,mp['D']=12;mp['I']=20;
    string s;
    ll e=0,a;
    cin>>a;
    while(a--){cin>>s;e+=mp[s[0]];}
    cout<<e;

   return 0;
}