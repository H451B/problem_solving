#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,d,e;
    cin>>a;
    while(a--){
        cin>>b>>c;
        // if(c%4==0){cout<<"NO\n";}
        if(c==0){cout<<"NO\n";}
        else if(c%2!=0){
            cout<<"YES\n";
            d=1;e=2;
            for(int i=0;i<b/2;i+=1){
                cout<<d<<" "<<e<<endl;
                d=d+2;e=e+2;
            }
        }else{
            cout<<"YES\n";
            d=2;e=1;
            for(int i=0;i<b/2;i+=1){
                cout<<d<<" "<<e<<endl;
                if(i%2==0){d=d+1;e=e+3;}
                else{d=d+3;e=e+1;}
            }
        }
    }
}