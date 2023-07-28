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

    ll x,y,z,a,b,c;
    cin>>x;
    while(x--){
        cin>>a>>b>>c;
        // vector<pair<ll,ll>>v(c);
        vector<ll>arb(a+1,0),arg(b+1,0);
        vector<ll>b,g;
        ll t=0;
        f1(i,0,c-1){
            cin>>y;
            b.push_back(y);
            arb[y]+=1;
        }
        f1(i,0,c-1){
            cin>>y;
            g.push_back(y);
            arg[y]+=1;
        }
        //-----------------tle-----------------------------------------------
        // f1(i,0,v.size()-1){
        //     if(i==v.size()-1){break;}
        //     f1(j,i+1,v.size()-1){
        //         if(v[i].first!=v[j].first&&v[i].second!=v[j].second){t+=1;}
        //     }
        // }
        f1(i,0,c-1){
            t+=c-arb[b[i]]-arg[g[i]]+1;
        }
        cout<<t/2<<endl;
    }

   return 0;
}