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

vector<ll>adj[30001];
bool visited[30001];
ll result=0;

void dfs_recursive(ll s,ll y){
    // cout<<s<<endl;
    visited[s]=true;
    if(s==y){result=-1;}
    for(int i=0;i<adj[s].size();i+=1){
        if(visited[adj[s][i]]==false){dfs_recursive(adj[s][i],y);}
    }
}

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    ll x,y,z,j=1;//result=0;
    cin>>x>>y;
    //-------------------------------------dfs_recursive
    f1(i,1,x-1){
        cin>>z;
        adj[i].push_back(i+z);
        visited[i]=false; 
    }
    dfs_recursive(1,y);
    if(result==-1){cout<<"YES\n";}
    else{cout<<"NO\n";}

    //------------------------------------normal
    // vector<ll>node(x),to_node(x);
    // f1(i,1,x-1){
    //     cin>>node[i];
    //     to_node[i]=i+node[i];
    // }
    // while(1){
    //     if(to_node[j]==y){result=-1;break;}
    //     else if(j>y){break;}
    //     j=to_node[j];
    // }
    // if(result==-1){cout<<"YES\n";}
    // else{cout<<"NO\n";}

   return 0;
}