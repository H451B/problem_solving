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
    vector<pair<ll,ll>>vp;
    vector<ll>v;
    cin>>x;
    while(x--){
        cin>>y>>z;
        f1(0,y-1){
            cin>>a>>b;
            vp.push_back(make_pair(a,b));
        }
        // |xi−xj|+|yi−yj|≤k
        ll cc=0;
        f1(0,vp.size()-1){
            for(int j=0;j<vp.size();j+=1){
                if(i!=j){
                    if(abs(vp[i].first-vp[j].first)+abs(vp[i].second-vp[j].second)<=z){
                        cc+=1;
                        //cout<<vp[i].first<<" "<<vp[i].second<<" "<<vp[j].first<<" "<<vp[j].second<<endl;
                    }
                }
            }
            //cout<<"\t"<<cc<<endl;
            v.push_back(cc);
            //cout<<endl;
            cc=0;
        }
        sort(v.begin(),v.end());
        if(v[0]==0){cout<<"-1\n";}
        else if(v[y-1]<y-1){cout<<"-1"<<endl;}
        else{cout<<y-v[y-1]<<endl;}
        vp.clear();
        v.clear();
    }

   return 0;
}