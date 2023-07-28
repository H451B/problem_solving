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

ll arr[10001];
ll solve(ll x){
    f1(6,x){arr[i]=(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%10000007;}
    return arr[x]%10000007;
};

int main(){
    syncC;
    //io;

    ll x,a,b=1,n;
    cin>>x;
    while(x--){
        f1(0,5){cin>>a;arr[i]=a;}
        cin>>n;
        cout<<"Case "<<b++<<": "<<solve(n)<<endl;
    }

   return 0;
}