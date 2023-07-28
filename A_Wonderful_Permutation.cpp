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

    int x;
    cin>>x;
    while(x--){
        int y,z,r;
        cin>>y>>z;
        vector<pair<int,int>>v;
        for(int i=0;i<y;i+=1){
            cin>>r;
            v.push_back(make_pair(r,i+1));
        }
        int ans=0;
        sort(v.begin(),v.end());
        for(int i=0;i<z;i+=1){
            if(v[i].second>z){ans+=1;}
        }
        cout<<ans<<endl;
    }

   return 0;
}