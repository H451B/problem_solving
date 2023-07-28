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

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
bool solve(){};

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    ll x;
    cin>>x;
    while(x--){
        ll y,z,ans=0,tem=0;
        vector<ll>v;
        cin>>y;
        f1(i,0,y-1){
            cin>>z;
            v.push_back(z);
        }
        if(y%2==1){
        for(int i=1;i<y-1;i+=2){
            if(v[i]<=max(v[i-1],v[i+1])){
                ans+=(max(v[i-1],v[i+1])-v[i])+1;
            }
        }}
        else{
            ll left[y+4],right[y+4];
            ans=LONG_LONG_MAX;
            left[-1]=0;
            for(int i=1;i<y-1;i+=2){
                if(v[i]<=(max(v[i-1],v[i+1]))){
                    left[i]=left[i-2]+((max(v[i-1],v[i+1])-v[i])+1);
                }else{left[i]=left[i-2]+0;}
                // cout<<i<<" "<<left[i]<<endl;
            }
            right[y]=0;
            for(int i=y-2;i>0;i-=2){
                if(v[i]<=max(v[i-1],v[i+1])){
                    right[i]=right[i+2]+((max(v[i-1],v[i+1])-v[i])+1);
                }else{right[i]=right[i+2]+0;}
                // cout<<i<<" t"<<right[i]<<endl;
            }
            for(int i=0;i<=y-1;i+=2){
                ans=min(ans,left[i-1]+right[i+2]);
            }
        }
        
        cout<<ans<<endl;
    }

   return 0;
}