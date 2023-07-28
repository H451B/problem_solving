#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int y,z,a=0,b=0,c=0,d=0;
        vector<int>v,v2;
        cin>>y;
        for(int i=0;i<y;i+=1){
            cin>>z;
            if(a>z){b+=1;}
            v.push_back(z);
            if(b==1){c=i-1;b+=1;}
            a=z;
        }
        for(int i=c;i<y;i+=1){
            v2.push_back(v[i]);
        }

        if(b==0){cout<<"YES\n";}
        else if(is_sorted(v2.rbegin(),v2.rend())){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
}