#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z,a,b=0;
    vector<int>v;
    cin>>x;
    for(int i=0;i<x;i+=1){
        cin>>y;
        if(i>0){
            if(y<z){
                if(y<a){
                    a=y;
                    b+=1;
                }
            }else if(y>z){
                z=y;
                b+=1;
            }
        }else if(i==0){
            z=y;
            a=y;
        }
    }
    cout<<b;


   return 0;
}