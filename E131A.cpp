#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==1&&a==b&&a==c&&a==d){
            cout<<2<<endl;
        }else if(a==0&&a==b&&a==c&&a==d){cout<<0<<endl;}
        else{cout<<1<<endl;}
    }
    return 0;
}