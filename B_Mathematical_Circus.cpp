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
        ll y,z,p,q;
        cin>>y>>z;
        if(z%4==0){cout<<"NO"<<endl;}        
        else if(z%2==0){
            cout<<"YES"<<endl;
            p=2,q=1;
            for(int i=0;i<y/2;i+=1){
                cout<<p<<" "<<q<<endl;
                if(i%2==0){
                    p+=1;
                    q+=3;
                }else{p+=3;q+=1;}
            }
        }else{
            cout<<"YES"<<endl;
            p=1,q=2;
            for(int i=0;i<y/2;i+=1){
                cout<<p<<" "<<q<<endl;
                p+=2;
                q+=2;
            }
        }
    }

   return 0;
}