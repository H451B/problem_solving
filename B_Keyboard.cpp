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

    ll x,y,z,b,cc=0,dd=0;
    map<char,int>mp;
    vector<pair<int,int>>vp,vpp;
    vector<string>v;
    string a;
    cin>>x>>y>>z;
    int mx=max(x,y);
    f1(1,x){
        cin>>a;
        v.push_back(a);
    }
    cin>>b>>a;
    f1(0,a.size()-1){
        if(a[i]>='A'&&a[i]<='Z'){mp[a[i]]=1;}
    }
    f1(0,v.size()-1){
        for(int j=0;j<v[i].size();j+=1){
            if(v[i][j]=='S'){dd+=1;vp.push_back(make_pair(i+1,j+1));}
            else if(mp[(v[i][j])-32]==1){
                vpp.push_back(make_pair(i+1,j+1));
            }
        }
    }
    //if(z>=mx){cout<<"0";}
    if(dd==0){cout<<"-1";}
    else{
    f1(0,vp.size()-1){
        for(int j=0;j<vpp.size();j+=1){
            double db;
            db=sqrt(pow((vp[i].first-vpp[j].first),2)+pow((vp[i].second-vpp[j].second),2));
            if(db>z){mp[v[vpp[j].first-1][vpp[j].second-1]-32]+=1;}
        }
    }
    for(auto i:mp){
        if(i.second>=vp.size()+1){cc+=1;}
    }
    cout<<cc;
    }

   return 0;
}