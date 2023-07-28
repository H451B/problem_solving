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

    ll x,y,z,a=0;
    vector<int>v,v1;
    cin>>x;
    while(x--){
        cin>>y;
        v.push_back(y);
        v1.push_back(y);
    }
    sort(v.begin(),v.end());
    f1(0,v.size()-1){
        if(v[i]!=v1[i]){
            a=i;break;
        }
    }
    y=0;
    for(int i=v.size()-1;i>-1;i-=1){
        if(v[i]!=v1[i]){
            y=i;break;
        }
    }
    z=0;
    reverse(v1.begin()+a,v1.begin()+y+1);
    for(int i=0;i<v.size()-1;i+=1){
        if(v[i]!=v1[i]){
            z+=1;
        }
    }
    if(z!=0){cout<<"no";}
    else if(a==0&&y==0){cout<<"yes\n"<<1<<" "<<1;}
    else{cout<<"yes\n"<<a+1<<" "<<y+1;}

   return 0;
}