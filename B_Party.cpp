#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int a,b,y,z,min=INT_MAX;
        cin>>a>>b;
        vector<int>v[a+1];
        map<int,int>mp;

        for(int i=0;i<a;i+=1){
            cin>>y;
            mp[i+1]=y;
        }
        for(int i=0;i<b;i+=1){
            cin>>y>>z;
            if(mp[y]+mp[z]<min){min=mp[y]+mp[z];}
            v[y].push_back(z);
            v[z].push_back(y);
        }

        if(b%2==0){cout<<0<<endl;}
        else{
        for(int i=1;i<=a;i+=1){
            if(v[i].size()%2){if(mp[i]<min){min=mp[i];}}
        }
        cout<<min<<endl;}
    }
    return 0;
}