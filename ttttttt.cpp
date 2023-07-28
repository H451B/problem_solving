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
    ll x;
    cin>>x;
    while(x--){
    ll n,x=9; cin>>n;
	  vector<ll>v;
	  if(n<46) {
          while(n>0){
       if(n>=x)  {
          n-=x;
          v.push_back(x);
        }
          x--;
	  }
	  }
	  if(n==0){
       sort(v.begin(),v.end());
       for(auto i: v) cout<<i;
	  }else cout<<-1;
        cout<<endl;
    }

   return 0;
}
