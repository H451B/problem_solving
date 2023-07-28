#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
 
int main(){
    int x;
    cin>>x;
    while(x--){
        int y,z,a,b,c=0;
        map<ll,ll>mp;
        vector<ll>v;
        cin>>y>>z;
        for(int i=0;i<y;i+=1){
            cin>>a;
            mp[a]=i+1;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i+=1){
            if(i>0){
                if(mp[v[i]]!=mp[v[i-1]]+1){c+=1;}
            }
        }
        if(c<z){cout<<"Yes\n";}
        else{cout<<"No\n";}
    }
}