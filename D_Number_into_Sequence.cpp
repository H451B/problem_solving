#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second>b.second);}
ll solve(){};

int main(){
    syncC;
    //io;

    ll x,y,z;
    map<ll,ll>mp;
    vector<pair<ll,ll>>vp;
    cin>>x;
    while(x--){
        cin>>y;
        while (y%2==0){mp[2]+=1;y/=2;}
        for (ll i=3;i<=sqrt(y);i+=2) { 
            while(y%i==0){mp[i]+=1;y/=i;}  
        } 
        if(y>2){mp[y]+=1;}
        map<ll, ll>::iterator it;
        for (it=mp.begin(); it!=mp.end(); it++){
            vp.push_back(make_pair(it->first, it->second));
        }
        sort(vp.begin(), vp.end(), sortSec);
        cout<<vp[0].second<<endl;
        ll a=1,b=0;
        if(vp.size()==1){for(int i=0;i<vp[0].second;i+=1){cout<<vp[0].first<<" ";}cout<<endl;}
        else{
        for(auto i:vp){
            if(b==0){
            b+=1;
            a*=i.first;
            for(int j=0;j<i.second-1;j+=1){
                cout<<i.first<<" ";
            }}else{
            for(int j=0;j<i.second;j+=1){
                a*=i.first;
            }}
        }
        cout<<a<<endl;}
        // for(auto i:mp){cout<<i.first<<" "<<i.second<<endl;}
        // cout<<endl;
        vp.clear();
        mp.clear();
    }

   return 0;
}