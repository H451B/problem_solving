#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC ios_base::sync_with_stdio(0); //cin.tie(0); cout.tie(0)
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

    ll x,y,z;
    cin>>x>>y;
    vector<ll>v1;
    deque<ll>dq;
    deque<ll>::iterator low;
    f1(i,0,x-1){
        cin>>z;
        dq.push_back(z);
    }
    f1(i,0,y-1){cin>>z;v1.push_back(z);}
    f1(j,0,y-1){
        ll temp;
        f1(i,0,x-1){if(dq[i]==v1[j]){temp=i;break;}}
        cout<<temp+1<<" ";
        ll temp1=dq[temp];
        low = dq.begin()+temp;
        dq.erase(low);
        dq.push_front(temp1);
    }

   return 0;
}