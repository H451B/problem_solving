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

    ll x,y,z;
    cin>>x;
    vector<ll>v;
    while(x--){
        cin>>y>>z;
        ll a=y,b=1,c=z;
        f1(i,0,y-1){
            if((i+1)%2==0&&c>0){v.push_back(a);a-=1;c-=1;}
            else{v.push_back(b);b+=1;}
        }
        if(z>(y-1)/2){cout<<"-1";}
        else{
        for(auto i:v){cout<<i<<" ";}
        }
        cout<<endl;
        v.clear();
    }

   return 0;
}