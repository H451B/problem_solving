#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(int j=n;j<=m;j+=1)
#define f3(n,m) for(int i=n;i>=m;i-=1)
#define f4(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
ll solve(){};

int main(){
    syncC;

    ll x,y,z=0,a,b,c,d,j,rep;
    cin>>a>>b>>c>>d;
    vector<pair<ll,ll>>vp;
    map<ll,string>mp;
    mp[1]="Carrots";
    mp[2]="Kiwis";
    mp[0]="Grapes";
    vp.push_back(make_pair(0,0));
    f1(1,c){
        cin>>x>>y;
        vp.push_back(make_pair(x,y));
    }
    sort(vp.begin(),vp.end());
    f1(1,d){
        cin>>x>>y;rep=0;
        for(j=1;j<=c;j+=1){
            if(x==vp[j].first&&y==vp[j].second){cout<<"Waste\n";rep=1;break;}
            else if(x==vp[j].first&&y<vp[j].second&&x==1){cout<<mp[(y-(j-1))%3]<<endl;rep=1;break;}
            else if(x==vp[j].first&&y<vp[j].second&&x>1){cout<<mp[(((b*(x-1))+y)-(j-1))%3]<<endl;rep=1;break;}
            else if(vp[j].first>x){j-=1;rep=2;break;}
        }
        if(x==1&&rep==2){cout<<mp[(y-j)%3]<<endl;}
        else if(x==1&&rep==0){cout<<mp[(y-(j-1))%3]<<endl;}
        else if(rep==2){cout<<mp[(((b*(x-1))+y)-j)%3]<<endl;}
        else if(rep==0){cout<<mp[(((b*(x-1))+y)-(j-1))%3]<<endl;}
    }

   return 0;
}