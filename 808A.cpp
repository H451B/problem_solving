#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int y,z,a=0;
        vector<int>v;
        cin>>y;
        for(int i=0;i<y;i+=1){
            cin>>z;
            if(i>0){if(z%v[0]!=0){a+=1;}}
            v.push_back(z);
        }
        if(a>0){cout<<"NO\n";}
        else{cout<<"YES\n";}
    }
    return 0;
}