//-------------------MINUMUM SPANNING TREE---------------
//cycle finding (dsu) 

// KRUSKAL(V, E, w)
// A ← { } //edges
// for each vertex v in V
//     do MAKE-SET(v)
// sort E into increasing order by weight w
// for each (u, v) taken from the sorted list
//     do if FIND-SET(u) = FIND-SET(v)
//         then A ← A ∪ {(u, v)}
//             UNION(u, v)
// return A

#include<bits/stdc++.h>
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

int i,j,k,a,b,u,v,n,ne=1;
int miin,mincost=0,cost[9][9],parent[9];

int find(int);
int unionn(int,int);

void main(){
    cin>>n;//------------------------------------------verticies
    for(i=1;i<=n;i++){//-------------------------------adj mat
    	for(j=1;j<=n;j++){
    		cin>>cost[i][j];
    		if(cost[i][j]==0){cost[i][j]=999;}
    	}
    }
    cout<<"Edges :\n";
    while(ne < n){
    	for(i=1,miin=999;i<=n;i++){//------------------increasing
    		for(j=1;j <= n;j++){
    			if(cost[i][j] < miin){
    				miin=cost[i][j];
    				a=u=i;
    				b=v=j;
    			}
    		}
    	}
    	u=find(u);
    	v=find(v);
    	if(unionn(u,v)){
    		printf("%d edge (%d,%d) =%d\n",ne++,a,b,min);
    		mincost +=miin;
    	}
    	cost[a][b]=cost[b][a]=999;
    }
    cout<<"Minimum cost :\t"<<mincost;
}

int find(int i){
    while(parent[i])
    i=parent[i];
    return i;
}

int unionn(int i,int j){
    if(i!=j){
    	parent[j]=i;
    	return 1;
    }
    return 0;
}