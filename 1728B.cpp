#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x;
    cin>>x;
    while(x--){
        int y,z,a=0;
        cin>>y;
        z=y-2;
        if(y==1){cout<<1<<endl;}
        else if(y==2){cout<<1<<" "<<2<<endl;}
        else if(y==3){cout<<2<<" "<<1<<" "<<3<<endl;}
        else if(y%2==0){
            for(int i=0;i<y-2;i+=1){cout<<z<<" ";z-=1;}
            cout<<y-1<<" "<<y<<endl;
        }else{
            for(int i=0;i<y-2;i+=1){
                if(i==0){cout<<z-1<<" ";continue;}
                if(i==1){cout<<z<<" ";z-=2;continue;}
                cout<<z<<" ";z-=1;
            }
            cout<<y-1<<" "<<y<<endl;
        }
        
    }
    return 0;
}