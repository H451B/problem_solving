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

    ll x,y,z;
    cin>>x;
    while(x--){
        cin>>y;
        vector<ll>v,v2;
        f1(0,y-1){
            cin>>z;
            v.push_back(z);
        }
        ll l=0,k=y-1;
        f1(0,y-1){
            if(i%2==0){cout<<v[l]<<" ";l+=1;}
            else{cout<<v[k]<<" ";k-=1;}
        }
        cout<<endl;
        v.clear();
        v2.clear();
    }

   return 0;
}