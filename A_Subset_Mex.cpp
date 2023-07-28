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

    ll x,y,z,a,b,c,d;
    map<ll,ll>mp;
    cin>>x;
    while(x--){
        a=b=c=0;
        cin>>y;
        f1(0,y-1){mp[i]=0;}
        f1(0,y-1){
            cin>>z;
            mp[z]+=1;
        }
        for(auto i:mp){
            if(i.second==1&&a==0){b+=i.first;a+=1;}
            else if(i.second==0&&c==0){b+=i.first;c+=1;}
        }
        if(c==0){b+=y;}
        cout<<b<<endl;
        mp.clear();
    }

   return 0;
}