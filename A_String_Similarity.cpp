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

    ll x,y,n=0,m=0;
    string s;
    cin>>x;
    while(x--){
        cin>>y>>s;
        for(int i=0;i+y<=s.size();i+=1){
            for(int j=i;j<i+y;j+=1){
                if(s[j]=='1'){n+=1;break;}
            }
            for(int j=i;j<i+y;j+=1){
                if(s[j]=='0'){m+=1;break;}
            }
        }
        f1(0,y-1){n>=m?cout<<1:cout<<0;}cout<<endl;n=m=0;
    }

   return 0;
}