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

    ll x,y,z,a=0;
    cin>>x;
    vector<int>v;
    while(x--){
        cin>>y>>z;
        if(z>y){cout<<y<<endl;}
        else{
        a = (ll)sqrt(y) + 1;
        for (ll i=1;i<a;i+=1) { 
            if (y%i == 0&&i*i!=y){
                v.push_back(i);
                v.push_back(y/i);
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        f1(0,v.size()-1){
            if(v[i]%z!=0){cout<<v[i]<<endl;break;}
        }
        v.clear();
        }
    }

   return 0;
}