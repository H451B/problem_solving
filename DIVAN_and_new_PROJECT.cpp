#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(i) cout<<"test "<<i<<endl;
#define f1(i,n,m) for(int i=n;i<=m;i+=1)
#define f2(i,n,m) for(int i=n;i>=m;i-=1)
#define f3(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second>b.second);}
bool solve(){};

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    ll x,y,z,a,b;
    cin>>x;
    while(x--){
        cin>>y;
        a=y/2+1;
        vector<pair<ll,ll>>v,v1;
        for(int i=0;i<y;i+=1){
            cin>>z;
            v.push_back(make_pair(i+1,z));
        }
        sort(v.begin(),v.end(),sortSec);
        b=1;
        ll result=0;
        for(int i=0;i<y;i+=1){
            if(i%2==0){
                v1.push_back(make_pair(v[i].first,a-b));
                result=result+2*abs(a-(a-b))*v[i].second ;
            }
            else{
                v1.push_back(make_pair(v[i].first,a+b));
                result=result+2*abs(a-(a+b))*v[i].second;
                b+=1;
            }
        }
        // 2 x a - var[1,2,3,...]*t
        sort(v1.begin(),v1.end());
        cout<<result<<endl;
        cout<<a<<" ";
        for(int i=0;i<y;i+=1){
            cout<<v1[i].second<<" ";
        }
        cout<<endl;
        v.clear();
        v1.clear();
        
    }

   return 0;
}