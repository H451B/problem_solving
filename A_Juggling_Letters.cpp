#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
ll solve(){};

int main(){
    syncC;
    //io;

    ll x,y,z=0,a=0;
    string s;
    char c='a';
    map<char,int>mp;
    cin>>x;
    while(x--){
        f1(0,25){mp[c]=0;c+=1;}
        cin>>y;
        for(int j=0;j<y;j+=1){
            cin>>s;
            for(int k=0;k<s.size();k+=1){mp[s[k]]+=1;}
        }
        for(auto i:mp){if(i.second>0&&i.second%y==0){z+=1;}if(i.second>0){a+=1;}}
        if(z==a){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        c='a',z=0;a=0;mp.clear();
    }

   return 0;
}