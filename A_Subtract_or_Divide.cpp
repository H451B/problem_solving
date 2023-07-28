#include <bits/stdc++.h>
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

ll prime[1001];
void sieve(ll n){
    //bool prime[n+1];
    for(int i=0;i<=n;i+=1){prime[i]=1;}
    //memset(prime, 1, sizeof(prime));
  
    for (ll p=2; p*p<=n; p++){ 
        if (prime[p] == 1){ 
            for (ll i=p*p; i<=n; i += p) 
                prime[i] = 0;
        } 
    }
} 

int main(){
    syncC;
    //io;

    ll x,y,z,r=0;
    cin>>x;
    while(x--){
        cin>>y;
        sieve(y);
        z=0;
        if(y==1){cout<<0<<endl;}
        else if(y==2){cout<<1<<endl;}
        else{
            sieve(y);
            while(1){
                if(y==1){break;}
                if(prime[y]==1){y-=1;z+=1;}
                else{
                    for(ll i=2;i<=y/2;i+=1){
                        cout<<z<<endl;
                        if(y%i==0&&i!=y){y=i;z+=1;break;}
                    }
                }
            }
            cout<<z<<endl;
        }
    }

   return 0;
}