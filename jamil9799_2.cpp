#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(i,n,m) for(int i=n;i<=m;i+=1)
#define f2(i,n,m) for(int i=n;i>=m;i-=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
bool solve(){};

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    string s,r;
    map<char,int>mp;
    char c='a';
    int x,y=0;
    cin>>s;
    f1(i,0,25){cin>>x;mp[c]=x;c+=1;}
    y=0;
    for(int i=1;i<s.size()-1;i+=1){
        y+=min(abs(mp[s[i]]-mp[s[i-1]]),abs(mp[s[i]]-mp[s[i+1]]));
    }
    cout<<y<<endl;

   return 0;
}