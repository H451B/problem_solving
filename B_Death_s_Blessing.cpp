#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool sortSec(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second<b.second);}

int main(){
    int x;
    cin>>x;
    while(x--){
        int y;
        ll z;
        cin>>y;
        vector<pair<ll,ll>>v;
        for(int i=0;i<y;i+=1){
            cin>>z;
            v.push_back(make_pair(z,0));
        }
        for(int i=0;i<y;i+=1){
            cin>>z;
            v[i].second=z;
        }
        
        sort(v.begin(),v.end(),sortSec);
        v.push_back(make_pair(0,0));
        ll ans=0;
        if(y==1){cout<<v[0].first<<endl;}
        else{
            for(int i=0;i<y;i+=1){
                ans+=v[i].first;
                v[i+1].first+=v[i].second;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}