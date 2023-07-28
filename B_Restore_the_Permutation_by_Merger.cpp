#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool cmp(pair<int,int>&a,pair<int,int>&b){ 
    return a.second < b.second; 
} 

void sort(map<int,int>&mp) { 
    vector<pair<int,int>>v; 
    for (auto& it:mp) { 
        v.push_back(it); 
    } 
    sort(v.begin(),v.end(),cmp);
    for (auto& it:v){
        cout << it.first<<" ";
    }
    v.clear();
}

int main(){
    syncC;
    //io;

    ll x,y,z,k=1;
    map<int,int>mp;
    cin>>x;
    while(x--){
        cin>>y;
        k=1;
        f1(1,y){mp[i]=0;}
        f1(1,2*y){cin>>z;if(mp[z]==0){mp[z]=k;k+=1;}}
        sort(mp);
        cout<<endl;
        mp.clear();
    }

   return 0;
}