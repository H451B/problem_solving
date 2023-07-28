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

    ll x,y,z,a,b,ze,on;
    string s;
    cin>>z;
    while(z--){
        cin>>x>>a>>b>>y;
        cin>>s;
        on=0;ze=0;
        f1(0,s.size()-1){
            if(s[i]=='1'){on+=1;}
            else{ze+=1;}
        }
        if(x*a+on*y<=x*b+ze*y){
            if(on*b+ze*a<=x*a+on*y){
                cout<<on*b+ze*a<<endl;
            }
            else{
                cout<<x*a+on*y<<endl;
            }
        }else{
            if(on*b+ze*a<=x*b+ze*y){
                cout<<on*b+ze*a<<endl;
            }
            else{
                cout<<x*b+ze*y<<endl;
            }
        }
    }

   return 0;
}