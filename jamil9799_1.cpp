#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(i,n,m) for(int i=n;i<=m;i+=1)
#define f2(i,n,m) for(int i=n;i>=m;i-=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
bool solve(){};

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    ll x,y,z,r=0,c=0,k;
    cin>>x>>y;
    ll arr[x][y];
    f1(i,0,x-1){
        z=0;
        f1(j,0,y-1){
            cin>>k;
            arr[i][j]=k;
            z+=k;
        }
        if(z%2==0){r+=1;}
    }
    f1(i,0,x-1){
        z=0;
        f1(j,0,y-1){
            z+=arr[j][i];
        }
        if(z%2==0){c+=1;}
    }
    cout<<"Row: "<<r<<endl<<"Column: "<<c<<endl;

   return 0;
}