#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin>>x;
    while(x--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b*c==a*d){cout<<0<<endl;}
        else if(a==0||c==0){cout<<1<<endl;}
        else if(max((a*d),(b*c))%min((a*d),(b*c))==0){cout<<1<<endl;}
        else{cout<<2<<endl;}
    }
}