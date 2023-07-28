#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second>b.second);}
ll solve(){};

int main(){
    syncC;
    //io;

    double x,y,z,b,c,a;
    vector<pair<ll,ll>>v;
    vector<ll>v1;
    cin>>x;
    while(x--){
        cin>>y>>z;
        a=z/2;
        f1(0,y-1){
            cin>>b;
            v.push_back(make_pair(i+1,b));
        }
        sort(v.begin(),v.end(),sortSec);
        b=0;
        f1(0,v.size()-1){
            b+=v[i].second;
            if(b>z){b-=v[i].second;}
            else{v1.push_back(v[i].first);}
        }
        if(b>=a){cout<<v1.size()<<endl;f1(0,v1.size()-1){cout<<v1[i]<<" ";}cout<<endl;}
        else{cout<<"-1\n";}
        v.clear();
        v1.clear();
    }

   return 0;
}