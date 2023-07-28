#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll x;
    cin>>x;
    while(x--){
        ll y,z;
        vector<pair<ll,ll>>v;
        map<ll,ll>mp1,mp2;
        cin>>y;
        int b=y;
        for(ll i=0;i<y;i+=1){
            cin>>z;
            v.push_back(make_pair(z,i%2));
            if(i%2==0){mp1[z]++;}
            else{mp2[z]++;}
        }
        int a=0;
        sort(v.begin(),v.end());
        for(ll i=0;i<y;i+=1){
            if(i%2==0){
                if(mp1[v[i].first]>0){mp1[v[i].first]--;}
                else{a=1;break;}
            }
            else{
                if(mp2[v[i].first]>0){mp2[v[i].first]--;}
                else{a=1;break;}
            }
        }
        if(a==1){cout<<"NO\n";}
        else{cout<<"YES\n";}
    }
}