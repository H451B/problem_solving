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
    vector<ll>v;
    string s;
    cin>>x;
    while(x--){
        cin>>y>>z>>s;
        b=c=0;
        f1(0,s.size()-1){
            if(s[i]=='1'){
                v.push_back(i+1);
            }
        }
        f1(1,v.size()-1){
            if((v[i]-v[i-1])>1){b+=(v[i]-v[i-1])-1;}
        }
        c=v.size();
        if((c*y)>=((b*z)+y)){
            cout<<(b*z)+y<<endl;
        }else{
            cout<<c*y<<endl;
        }
        v.clear();
    }

   return 0;
}