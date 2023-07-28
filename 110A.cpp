#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x,y,z=0;
    bool f=false;
    cin>>x;
    y=x;
    int t=0;
    for(;y!=0;y/=10,t++);
    for(int i=0;i<t;i+=1){
        if((x%10)!=4&&(x%10)!=7){
            f=true;
        }else{
            z+=1;
        }
        x=x/10;
    }
    
    if(z==4||z==7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

   return 0;
}