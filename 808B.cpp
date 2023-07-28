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

    ll x;
    cin>>x;
    while(x--){
        ll a,b,c,tmp;
        map<ll,ll>mp;
        vector<ll>v;

        cin>>a>>b>>c;
        for(ll i=1;i<=a;i+=1){
            if(b%i==0){v.push_back(b);}
            else{
                tmp=((b/i)+1)*i;
                if(tmp<=c){v.push_back(tmp);}
                else{break;}
            }
        }
        if(v.size()==a){
            cout<<"YES\n";
            for(auto i:v){cout<<i<<" ";}
            cout<<endl;
        }else{cout<<"NO\n";}
    }

   return 0;
}