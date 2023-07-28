#include<bits/stdc++.h>
using namespace std;

#define f1(x) for(int i=0;i<x;i+=1)

int main(){
        int a,b,c=0,d;
        //vector<int>v;
        cin>>a;
        f1(a){
            cin>>b;
            if(b>c){
                c=b;
                d=b;
            }
        }
        cout<<d;

    return 0;
}