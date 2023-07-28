#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)

int main(){
    syncC;
    //io;

    ll x,y,m,n;
    vector<int>v;
    cin>>x;
    f1(0,x-1){
        cin>>y;
        v.push_back(y);
    }
    f1(0,x-1){
        i==0?m=abs(v[i]-v[i+1]):i==x-1?m=abs(v[i]-v[i-1]):m=min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
        n=max(abs(v[i]-v[x-1]),abs(v[i]-v[0]));
        cout<<m<<" "<<n<<endl;
    }

   return 0;
}