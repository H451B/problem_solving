#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int x,y,z;
    cin>>x;
    for(int i=0;i<x;i+=1){
        cin>>y;
        v.push_back(y);
    }
    for(int i=0;i<x;i+=1){
        for(int j=i+1;j<x;j+=1){
            if(i==0&&j==1){
                z=(v[i]+v[j]);
            }else{
                z^=(v[i]+v[j]);
            }
        }
    }
    cout<<z;

    return 0;
}