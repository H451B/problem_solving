#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int y;
        cin>>y;
        if(y==0||y==4||y==1){cout<<2<<endl;}
        else if(y%3==1){cout<<y/3+1<<endl;}
        else if(y%3==2){cout<<y/3+1<<endl;}
        else{cout<<y/3<<endl;}
    }
}