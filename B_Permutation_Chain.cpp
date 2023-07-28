#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int y;
        vector<int>v;
        cin>>y;
        cout<<y<<endl;
        for(int i=0;i<y;i+=1){
            v.push_back(i+1);
        }
        for(int i=y;i>0;i-=1){
            if(i<y){swap(v[i],v[i-1]);}
            for(auto i:v){cout<<i<<" ";}
            cout<<endl;
        }
    }
}