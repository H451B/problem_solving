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

    ll x,y,z;
    map<ll,ll>mp;
    vector<ll>v;
    cin>>x;
    while(x--){
        ll b=0,c=0,d=0;
        cin>>y;
        f1(0,y-1){
            cin>>z;
            c=max(c,z);
            v.push_back(z);
            mp[z]+=1;
            if(mp[z]>1){b+=1;}
        }
        if(b==0){
            f1(0,v.size()-1){
                if(v[i]<=c){c=v[i];d=i;}
            }
            cout<<d+1<<endl;
        }else{
        ll a=0,e=0,f=0;
        f1(0,v.size()-1){
            if(mp[v[i]]==1){
                a+=1;
                if(v[i]<=c){c=v[i];d=i;}
            }
        }
        if(a==0){cout<<"-1"<<endl;}
        else{cout<<d+1<<endl;}
        }
        v.clear();
        mp.clear();
    }

   return 0;
}