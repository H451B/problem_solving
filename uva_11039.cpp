#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(i,n,m) for(int i=n;i<=m;i+=1)
#define f2(i,n,m) for(int i=n;i>=m;i-=1)
#define f3(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
bool solve(){};

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    ll x,y,z,p=0,q=0,r=0;
    vector<ll>v1,v;
    cin>>x;
    while(x--){
        cin>>y;
        while(y--){
            cin>>z;
            // if(z>0){p+=1;v.push_back(z);}
            // else if(z<0){q+=1;v1.push_back(z);}
            v.push_back(z);
        }
        // if(p<=q){
        //     sort(v.begin(),v.end());
        //     f1(i,1,v.size()-1){if(v[i]-v[i-1]!=1){r+=1;}}
        // }else{
        //     sort(v1.begin(),v1.end());
        //     f1(i,1,v1.size()-1){if(v1[i]-v1[i-1]!=1){r+=1;}}
        // }
        
        cout<<r<<endl;
        p=0;q=0;r=0;
        v.clear();
        v1.clear();
    }

   return 0;
}