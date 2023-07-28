#include<bits/stdc++.h>
using namespace std;

#define f1(x) for(int i=0;i<x;i+=1)

int main(){
    int x,y;
    vector<int>v;
    cin>>x;
    f1(x){
        cin>>y;
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    f1(x){
        cout<<v[i]<<" ";
    }



    return 0;
}