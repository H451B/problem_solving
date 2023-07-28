#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z=0;
    cin>>x;
    vector<int>v;
    for(int i=0;i<7;i+=1){
        cin>>y;
        v.push_back(y);
    }
    while(1){
        if(x<=0){
            if(z==0){
                cout<<"7";
            }else{
                cout<<z;
            }
            break;
        }else{
            x-=v[z];
            z+=1;
            z%=7;
        }
    }

    return 0;
}