#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f2(n,m) for(int i=n;i<=m;i+=1)
#define f1(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
ll solve(){};

int main(){
    syncC;
    //io;

    ld x,y,z,a,b,d,e;
    vector<ld>v;
    cin>>x;
    while(x--){
        cin>>y>>z;
        ld c;c=0;b=0;
        f2(0,y*z-1){
            cin>>a;
            v.push_back(a);
        }
        a=ceil(y/2);
        for(int i=(v.size()-1)-(y-a);i>-1;i-=y-a+1){
            if(b==z)break;
            c+=v[i];
            b+=1;
        }
        cout<<(long long)c<<endl;
        v.clear();
    }

   return 0;
}