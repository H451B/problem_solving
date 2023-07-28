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

    ll x,y,z=30,a=6,b=10,c=14,d; 
    cin>>x;
    f1(0,x-1){
        cin>>y;
        d=max(y,z)-min(y,z);
        if(z+d==y&&d!=a&&d!=b&&d!=c&&d!=0){cout<<"YES"<<endl<<6<<" "<<10<<" "<<14<<" "<<y-z<<endl;}
        else if(z+d==y&&d==a&&d!=0){cout<<"YES"<<endl<<5<<" "<<10<<" "<<15<<" "<<y-z<<endl;}
        else if(z+d==y&&d==b&&d!=0){cout<<"YES"<<endl<<6<<" "<<14<<" "<<15<<" "<<y-(6+14+15)<<endl;}
        else if(z+d==y&&d==c&&d!=0){cout<<"YES"<<endl<<6<<" "<<10<<" "<<15<<" "<<y-(6+10+15)<<endl;}
        else{cout<<"NO"<<endl;}
    }

   return 0;
}