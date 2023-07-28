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
bool solve(){};

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    ll x,y,z,t,tt,a=0;
    string s,r;
    map<ll,ll>mp;
    cin>>x;
    while(x--){
        cin>>y>>z>>s;
        mp[0]=y;
        mp[1]=z;
        r=s;
        reverse(r.begin(),r.end());
        if(s.size()%2==0){t=(s.size()/2)-1;}
        else{t=(s.size()/2);}
        tt=s.size()-1;
        a=0;
        f1(i,0,s.size()-1){
            if(s[i]==r[i])
            // if(s[i]=='?'&&r[i]!='?'){
            //     s[i]=r[i];mp[s[i]]-=1;
            // }else if(s[i]!='?'&&r[i]=='?'){
            //     r[i]=s[i];mp[s[i]-48]-=1;
            // }else if(s[i]==r[i]&&s[i]!='?'){
            //     mp[s[i]-48]-=1;
            // }else if(s[i]==r[i]&&s[i]=='?'){
            //     if(mp[1]>=mp[0]){s[i]='1';mp[s[i]-48]-=1;}
            //     else{s[i]='0';mp[s[i]]-=1;}
            // }else{a=100;}
        }
        if(a==100){cout<<"-1\n";}
        else{cout<<s<<endl;}

    }

   return 0;
}