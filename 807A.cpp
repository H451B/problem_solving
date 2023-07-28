#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int a,b,c,d=0;
        vector<int>v;
        cin>>a>>b;
        for(int i=0;i<a*2;i+=1){
            cin>>c;
            v.push_back(c);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<a;i+=1){
            if(v[a+i]-v[i]<b){d+=1;}
        }
        if(d<1){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
}