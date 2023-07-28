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

    ll x,y,z=0;
    cin>>x;
    while(x--){
        cin>>y;
        ll a[y];
        f1(0,y-1){
            cin>>a[i];
        }
        z=y-1;
        while(z>0&&a[z-1]>=a[z])z--;
    	while(z>0&&a[z-1]<=a[z])z--;
    	cout<<z<<endl;
    }

   return 0;
}