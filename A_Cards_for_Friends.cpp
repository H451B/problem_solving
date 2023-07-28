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

    ll x,y,z,a,b,c,r;
    cin>>x;
    while(x--){
        cin>>a>>b>>c;
        y=0;z=0;
        if(a%2==0){y=1;}
        if(b%2==0){z=1;}
        if(c==1){cout<<"YES\n";}
        else{
        while(a%2==0){
            a/=2;
            y*=2;
        }
        while(b%2==0){
            b/=2;
            z*=2;
        }
        if(y!=0&&z!=0&&y*z>=c||y==0&&z>0&&z>=c||z==0&&y>0&&y>=c){cout<<"YES\n";}
        else{cout<<"NO\n";}
        }
        //cout<<y<<" "<<c<<endl;
    }

   return 0;
}