#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z,a=0;;
    cin>>x;
    while(x--){
        cin>>y>>z;
        if(y==1&&z==0){
            a+=2;
        }else if(y==1&&z==1){
            a+=1;
        }
    }
    cout<<a;

    return 0;
}