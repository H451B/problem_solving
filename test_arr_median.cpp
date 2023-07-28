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

        long long ans=0;
        vector<int>v;
        v.push_back(0);
        v.push_back(1);
        
        // if(n==0){return v[0];}
        // if(n==1){return v[1];}
        long long n=6;

        for(int i=2;i<=n;i+=1){
            v.push_back(v[i-1]+v[i-2]);
            cout<<v[i]<<" ";
            ans+=v[i-1];
            cout<<ans<<endl;
        }

        // return ans;

   return 0;
}