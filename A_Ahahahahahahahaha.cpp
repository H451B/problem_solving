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

    ll x,y,z,a,b,c;
    map<ll,ll>mp;
    cin>>x;
    while(x--){
        cin>>y;
        a=0;
        f1(0,y-1){
            cin>>z;
            if(i%2!=0){mp[i]=-z;}
            else{mp[i]=z;}
            a+=mp[i];
        }
        cout<<y-abs(a)<<endl;;
        if(a>0){
            for(auto i:mp){
                if(a>0&&i.second==1){
                    a-=1;
                }else{
                    cout<<abs(i.second)<<" ";
                }
            }
        }else if(a<0){
            for(auto i:mp){
                if(a<0&&i.second==-1){
                    a+=1;
                }else{
                    cout<<abs(i.second)<<" ";
                }
            }
        }else{for(auto i:mp){cout<<abs(i.second)<<" ";}}
        cout<<endl;
        mp.clear();
    }

   return 0;
}