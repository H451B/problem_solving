#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))
#define mp make_pair
#define pb push_back

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
int solve(){};

vector<pair<int,int>>vp;
map<pair<int,int>,int>mpi;
//int v[inf][inf];

int minimum_moves(int x,int y,int xx,int yy){
    if(x==xx&&y==yy){return 0;}
    queue<pair<int,int>>qp;
    qp.push(mp(x,y));
    mpi[{x,y}]=0;
    mpi[{xx,yy}]=-1;
    while(!qp.empty()){
        int a=qp.front().first;
        int b=qp.front().second;
        qp.pop();
        f1(0,vp.size()-1){
            int c=a+vp[i].first;
            int d=b+vp[i].second;
            if(mpi[{c,d}]==-1){
                qp.push(mp(c,d));
                mpi[{c,d}]=mpi[{a,b}]+1;
                if(c==xx&&d==yy){return mpi[{c,d}];}
            }
        }
    }
    return mpi[{xx,yy}];
}

int main(){
    syncC;
    //io;

    vp.pb(mp(-1,1));vp.pb(mp(0,1));vp.pb(mp(1,1));vp.pb(mp(-1,0));
    vp.pb(mp(1,-1));vp.pb(mp(0,-1));vp.pb(mp(-1,-1));vp.pb(mp(1,0));
    int x,y,z,a,b,xx,yy,r,j;
    cin>>x>>y>>xx>>yy>>z;
    f1(0,z-1){
        cin>>r>>a>>b;
        for(j=a;j<=b;j+=1){mpi[{r,j}]=-1;}
    }
    cout<<minimum_moves(x,y,xx,yy);

}