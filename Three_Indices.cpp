#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

int main(){
    syncC;
    //io;

    ll x,y,z,i;
    map<int,int>mp;
    cin>>x;
    while(x--){
        cin>>y;
        for(i=1;i<=y;i+=1){cin>>z;mp[i]=z;}
        for(i=2;i<=y-1;i+=1){if(mp[i-1]<mp[i]&&mp[i]>mp[i+1]){cout<<"YES\n"<<i-1<<" "<<i<<" "<<i+1<<endl;break;}else if(i==y-1){cout<<"NO"<<endl;}}
        mp.clear();
    }

   return 0;
}
