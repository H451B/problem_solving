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

    ll x,y,z=0;
    vector<int>v;
    cin>>x;
    while(x--){
        cin>>y;
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>1;i-=1){
        if(v[i]<v[i-1]+v[i-2]){
            cout<<"YES";
            z=1;
            break;
        }
    }
    if(z!=1){cout<<"NO";}

   return 0;
}