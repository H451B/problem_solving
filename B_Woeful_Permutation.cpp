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
        ll y;
        cin>>y;
        // tmp=2;
        if(y%2==0){
            for(int i=1;i<=y;i+=1){
                if(i%2!=0){cout<<i+1<<" ";}
                else{cout<<i-1<<" ";}
            }
            cout<<endl;
        }else{
            cout<<1<<" ";
            for(int i=2;i<=y;i+=1){
                if(i%2==0){cout<<i+1<<" ";}
                else{cout<<i-1<<" ";}
            }
            cout<<endl;
        }
    }
 
   return 0;
}