#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(i) cout<<"test "<<i<<endl;
#define f1(i,n,m) for(int i=n;i<=m;i+=1)
#define f2(i,n,m) for(int i=n;i>=m;i-=1)
#define f3(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.first>b.first);}
bool sortTec(const pair<int,int> &a,const pair<int,int> &b){return (a.first<b.first);}
bool solve(){};

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    int x,y,z,a;
    cin>>x;
    while(x--){
        vector<pair<int,int>>vp,pv;
        map<int,int>mp;
        cin>>y>>z;
        for(int i=0;i<y;i+=1){
            cin>>a;
            vp.push_back(make_pair(a,i));
        }
        sort(vp.begin(),vp.end(),sortSec);
        // for(auto i:vp){cout<<i.second<<" "<<i.first<<endl;}
        int g=1,gg=0;
        for(int i=y-1;i>-1;i-=1){
            if(g>z){g=1;}
            if(mp[vp[i].first]+1>z){pv.push_back(make_pair(vp[i].second,0));}
            else{pv.push_back(make_pair(vp[i].second,g));mp[vp[i].first]+=1;g+=1;gg+=1;}
        }
        
        if(gg%z!=0){
            for(int i=0;i<gg%z;i+=1){
                pv[i].second=0;
            }
        }
        sort(pv.begin(),pv.end(),sortTec);
        // for(auto i:pv){cout<<i.first<<" "<<i.second<<endl;}
        for(int i=0;i<y;i+=1){
            cout<<pv[i].second<<" ";
        }
        cout<<endl;
    }

   return 0;
}