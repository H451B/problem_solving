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

    ll x,y,z,o,e;
    cin>>x;
    while(x--){
        cin>>y;
        ll arr[y];
        memset(arr,0,sizeof(arr));
        o=0;e=0;
        f1(0,y-1){
            cin>>z;
            arr[i]=z;
            if(i%2==0){e+=z;}
            else{o+=z;}
        }
        if(e<=o){f1(0,y-1){if(i%2==0){cout<<1<<" ";}else{cout<<arr[i]<<" ";}}}
        else{f1(0,y-1){if(i%2==0){cout<<arr[i]<<" ";}else{cout<<1<<" ";}}}
        cout<<endl;
    }

   return 0;
}