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

    int x;
    cin>>x;
    while(x--){
        double y,z,r=0;
        cin>>y>>z;
        if(y>=z){cout<<"YES\n";}
        else{
            for(double i=1;i<=y;i+=1){
                if(i+ceil(z/(i+1))<=y){r=1;break;}
            }
            if(r==1){cout<<"YES\n";}
            else{cout<<"NO\n";}
        }
    }

   return 0;
}