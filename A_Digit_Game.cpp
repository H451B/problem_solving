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

    ll x,y,a,b;
    string z;
    cin>>x;
    while(x--){
        cin>>y>>z;a=0;
        if(y%2==0){
            for(int i=1;i<y;i+=2){if(z[i]%2!=0){a+=1;}}
        }else{
            for(int i=0;i<y;i+=2){if(z[i]%2==0){a+=1;}}
        }
        
        if(y%2==0&&a<y/2){cout<<"2"<<endl;}
        else if(y%2==0&&a==y/2){cout<<"1"<<endl;}
        else if(y%2!=0&&a<(y/2)+1){cout<<"1"<<endl;}
        else{cout<<"2"<<endl;}
    }

   return 0;
}                                                   