#include<bits/stdc++.h>
using namespace std;

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}

int main(){
    int x;
    cin>>x;
    while(x--){
        int y,z;
        cin>>y;
        vector<int>v[y+1];
        for(int i=0;i<y;i+=1){
            cin>>z;
            v[z].push_back(i+1);
        }
        for(auto i:v){
            int ans=0;
            for(auto j:i){
                if(j%2){ans+=1;}
            }
        }
        for(auto i:mp){v.push_back(i);}
    }
}