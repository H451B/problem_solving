#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin>>x;
    while(x--){
        long long y,r=0,l=0,z;
        vector<int>v;
        cin>>y;
        for(int i=0;i<y;i+=1){
            cin>>z;
            if(z>0){r+=1;}
            if(r>0 && i<y-1){
                if(z>0){l+=z;}
                else{l+=1;}
            }
        }
        cout<<l<<endl;
    }
}