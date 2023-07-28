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

int main(){
    syncC;
    //io;

    ll x,y,z,a=1000000001,b=1000000001,d=0;
    cin>>x;
    vector<ll>v1,v2;
    while(x--){
        cin>>y;
        f1(0,y-1){cin>>z;v1.push_back(z);if(z<=a){a=z;}}
        f1(0,y-1){cin>>z;v2.push_back(z);if(z<=b){b=z;}}
        f1(0,y-1){
            d+=max(v1[i]-a,v2[i]-b);
        }
        cout<<d<<endl;v1.clear();v2.clear();d=0;a=1000000001;b=1000000001;
    }

   return 0;
}