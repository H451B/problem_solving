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

    ll x,y,y1,a=0,z;
    map<ll,ll>mp;
    vector<ll>v;
    cin>>x;
    while(x--){
        cin>>y>>y1;
        if(y>=y1){
            f1(0,y-1){cin>>z;mp[z]=1;}
            f1(0,y1-1){cin>>z;v.push_back(z);}
        }else{
            f1(0,y-1){cin>>z;v.push_back(z);}
            f1(0,y1-1){cin>>z;mp[z]=1;}
        }
        if(y>=y1){
            f1(0,y1-1){if(mp[v[i]]==1){cout<<"YES"<<endl<<"1 "<<v[i]<<endl;a=1;break;}}
        }else{
            f1(0,y-1){if(mp[v[i]]==1){cout<<"YES"<<endl<<"1 "<<v[i]<<endl;a=1;break;}}
        }
        if(a==0){cout<<"NO\n";}
        a=0;v.clear();mp.clear();
    }

   return 0;
}