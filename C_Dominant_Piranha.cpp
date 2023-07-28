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
    cin>>x;
    while(x--){
        cin>>y;
        v.push_back(0);
        while(y--){
            cin>>z;
            v.push_back(z);
        }
        v.push_back(0);
        a=0; 
        f1(1,v.size()-2){
            if(v[i]>v[i-1]||v[i]>v[i+1]){
                a=max(a,v[i]);
                if(v[i]==a){b=i;}
            }
        }
        if(b==1){
            if(v[b+1]==v[b]){
                cout<<"-1\n";
            }else{
                cout<<b<<endl;
            }
        }
        else if(b==v.size()-2){
            if(v[b-1]==v[b]){cout<<"-1\n";}
            else{cout<<b<<endl;}
        }
        else{
            cout<<b<<endl;
        }
        v.clear();
        b=0;
    }

   return 0;
}