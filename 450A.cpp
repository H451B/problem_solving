#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z=0,a;
    int xx[111];
    cin>>x>>y;
    for(int i=1;i<=x;i+=1){
        cin>>xx[i];
    }
    while(1){
        for(int i=1;i<=x;i+=1){
           if(xx[i]>0){
               a=i;
               xx[i]-=y;
               if(xx[i]<=0){
                    z+=1;
                }
            }
        }
        if(z==x){
            break;
        }
    }
    cout<<a;

    return 0;
}