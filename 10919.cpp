#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(ll i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

int main(){
    syncC;
    //io;

    ll x,y;
    while (cin>>x,x>0){
        cin>>y;
        map<string,int>mp;
        for (int i=0;i<x;i+=1){
            string s;
            cin >> s;+mp[s];
        }
        bool check=true;
        for (int i=0;i<y;i+=1){
            ll c, r;
            cin>>c>>r;
            for (int j=0;j<c;++j){
                string s;
                cin >> s;
                if(mp.find(s)!=mp.end()){r-=1;}
            }
            if(r>0){check=false;}
        }
        if(check){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
    }
    return 0;
}