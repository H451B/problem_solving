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

    ll x,n;
    string z,d,a,b;
    cin>>x;
    while(x--){
        cin>>n>>b;
        a+='1';
        d+=((a[0]-48)+(b[0]-48))+48;
        //cout<<d<<endl;
        f1(i,1,b.size()-1){
            if((b[i]-48)+1==(d[i-1]-48)){a+='0';d+=((a[i]-48)+(b[i]-48))+48;}
            else{a+='1';d+=((a[i]-48)+(b[i]-48))+48;}
        }
        cout<<a<<endl;
        a.clear();
        d.clear();
    }

   return 0;
}