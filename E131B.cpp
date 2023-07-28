#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int y,z,r=0,l=3;
        cin>>y;
        vector<int>v;
        map<int,int>mp;
        cout<<2<<endl;
        for(int i=1;i<=y;i+=1){
            if(i>1){
                if(v[r]*2<=y&&mp[v[r]*2]!=1){cout<<v[r]*2<<" ";v.push_back(v[r]*2);mp[v[r]*2]=1;r+=1;}
                else if(mp[l]!=1){cout<<l<<" ";v.push_back(l);r+=1;mp[l]=1;}
                else{
                    while(mp[l]==1){
                        l+=1;
                    }
                    cout<<l<<" ";
                    v.push_back(l);
                    r+=1;
                    mp[l]=1;
                }
            }else{cout<<i<<" ";v.push_back(i);}
        }
        cout<<endl;
    }
    return 0;
}