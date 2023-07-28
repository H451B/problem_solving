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
 
    ll r,g,b,w,x,y,z;
    cin>>x;
    while(x--){
        cin>>r>>g>>b>>w;
        if(r==g==b==w){cout<<"Yes"<<endl;}
        else if(r==0||g==0||b==0||w==0){cout<<"No"<<endl;}
        else if(r%2==0&&g%2==0&&b%2==0&&w%2==0||r%2!=0&&g%2!=0&&b%2!=0&&w%2!=0||r%2==0&&g%2==0&&b%2==0&&w%2!=0||r%2==0&&g%2==0&&b%2!=0&&w%2==0||r%2==0&&g%2!=0&&b%2==0&&w%2==0||r%2!=0&&g%2==0&&b%2==0&&w%2==0){cout<<"Yes"<<endl;}
        else if(r%2==0&&g%2!=0&&b%2!=0&&w%2!=0||r%2!=0&&g%2==0&&b%2!=0&&w%2!=0||r%2!=0&&g%2!=0&&b%2==0&&w%2!=0||r%2!=0&&g%2!=0&&b%2!=0&&w%2==0){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
    }
 
   return 0;
}