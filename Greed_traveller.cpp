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

// class data{
//     public:
//     int x,y;
// }r;
//map<ll,ll>mp;
ll arr[100][100];
ll result(ll a, ll b){
    //arr[a][b]=4;
    if(arr[a][b]>-1){return arr[a][b];}
    if(a==0||b==0){return 0;}
    if(a==1 && b==1){return 1;}
    arr[a][b]=result(a-1,b)+result(a,b-1);
    return arr[a][b];
}

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif
    
    ll a,b;
    cin>>a>>b;
    f1(i,0,a){
        f1(j,0,b){
            arr[i][j]=-1;
        }
    }
    cout<<result(a,b);

   return 0;
}