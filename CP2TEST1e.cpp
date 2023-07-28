#include<bits/stdc++.h>
using namespace std;

#define f1(x) for(int i=0;i<x;i+=1)
#define f2(a,b) for(int j=a;j<=b;j+=1)

int main(){
        int x,y,a,b;
        map<int,int>mp;
        cin>>x>>y;
        f1(x){
            mp[i+1]=0;
        }
        f1(y){
            cin>>a>>b;
            f2(a,b){
                mp[j]+=1;
            }
        }
        f1(x){
            cout<<mp[i+1]<<" ";
        }

    return 0;
}