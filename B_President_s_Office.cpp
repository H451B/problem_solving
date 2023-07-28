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

    ll x,y,a,b=0,c;
    vector<pair<int,int>>v;
    map<char,int>mp;
    char arr[102][102],z;
    cin>>x>>y>>z;
    f1(1,x){
        for(int j=1;j<=y;j+=1){
            cin>>arr[i][j];
            if(arr[i][j]==z){b+=1;}
            if(arr[i][j]==z){
                v.push_back(make_pair(i,j));
            }
        }
    }
    mp[z]=99;
    a=0;
    f1(0,v.size()-1){
        int l=v[i].first;
        int r=v[i].second;
        if(b==(x*y)){break;}
        if(arr[l+1][r]>='A'&&arr[l+1][r]<='Z'&&mp[arr[l+1][r]]!=99){
            mp[arr[l+1][r]]=99;
            a+=1;
        }if(arr[l-1][r]>='A'&&arr[l-1][r]<='Z'&&mp[arr[l-1][r]]!=99){
            a+=1;
            mp[arr[l-1][r]]=99;
        }if(arr[l][r+1]>='A'&&arr[l+1][r]<='Z'&&mp[arr[l][r+1]]!=99){
            a+=1;
            mp[arr[l][r+1]]=99;
        }if(arr[l][r-1]>='A'&&arr[l+1][r]<='Z'&&mp[arr[l][r-1]]!=99){
            a+=1;
            mp[arr[l][r-1]]=99;
        }
    }
    cout<<a;

   return 0;
}
