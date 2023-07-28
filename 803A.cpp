#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int y,a;
        vector<int>v;
        cin>>y;
        for(int i=0;i<y;i+=1){
            cin>>a;
            v.push_back(a);
        }
        int z=0;
        for(int i=0;i<y;i+=1){
            for(int j=0;j<y;j+=1){
                if(i!=j){
                    z^=v[j];
                }
            }
            if(v[i]==z){cout<<v[i]<<endl;break;}
            z=0;
        }
    }
    return 0;   
}