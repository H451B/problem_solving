#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z=0;
    bool c,d,e,f;
    c=d=e=f=true;
    cin>>x;
    int a[x+1],b[x+1];
    for(int i=0;i<x;i+=1){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<x;i+=1){
        c=d=e=f=true;
        for(int j=0;j<x;j+=1){
            if(i==j){
                continue;
            }else if(a[i]>a[j]&&b[i]==b[j]){
                c=false;
            }else if(a[i]<a[j]&&b[i]==b[j]){
                d=false;
            }else if(a[i]==a[j]&&b[i]>=b[j]){
                e=false;
            }else if(a[i]==a[j]&&b[i]<=b[j]){
                f=false;
            }
        }
        if(!c&&!d&&!e&&!f){
            z+=1;
        }
    }
    cout<<z;

    return 0;
}