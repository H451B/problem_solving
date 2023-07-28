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

    ll x,y,z,a,b=0,c;
    vector<int>v1,v2;
    cin>>y;
    while(y--){
    cin>>x>>z;
    f1(0,x-1){
        cin>>a;
        v1.push_back(a);
    }
    f1(0,x-1){
        cin>>a;
        v2.push_back(a);
    }
    sort(v2.begin(), v2.end(), greater<int>());
    f1(0,x-1){
        if(v1[i]+v2[i]<=z){
            b+=1;
        }
    }
    if(b==x){cout<<"Yes\n";}
    else{cout<<"No\n";}
    b=0;
    v1.clear();
    v2.clear();
    }

   return 0;
}