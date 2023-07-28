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
vector<ll>adj[2001];
bool visited[2001];
int isit[2001];
int ee=0;

void dfs(ll i){
    visited[i]=true;
    for(ll j=0;j<adj[i].size();j+=1){
        if(visited[adj[i][j]]==false){
            if(isit[i]==isit[adj[i][j]]){ee=1;return;}
            else{isit[adj[i][j]]=!isit[i];}
            dfs(adj[i][j]);
        }
        else if(visited[adj[i][j]]==true&&isit[i]==isit[adj[i][j]]){ee=1;return;}
    }
}

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    ll x,y,z,a,b;
    cin>>x;
    f1(k,1,x){
        cin>>y>>z;
        memset(adj,0,sizeof(adj));
        f1(i,0,z-1){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for(int i=1;i<=y;i+=1){visited[i]=false;isit[i]=-1;}
        f1(i,1,y){
            if(visited[i]==false){isit[i]=0;dfs(i);}
        }
        if(ee==1){cout<<"Scenario #"<<k<<":\n"<<"Suspicious bugs found!\n";}
        else{cout<<"Scenario #"<<k<<":\n"<<"No suspicious bugs found!\n";}
        ee=0;
    }

   return 0;
}