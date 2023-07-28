#include<bits/stdc++.h>
using namespace std;

#define f1(x) for(int i=0;i<x;i+=1)
#define f2(a,b) for(int j=a;j<=b;j+=1)

int main(){
         int x,y;
         map<int,int>mp;
         cin>>x;
         char s;
         f1(10){
             mp[i]=0;
         }
         f1(x){
             cin>>s;
             if(s=='L'){
                 f1(10){
                     if(mp[i]==0){
                         mp[i]=1;
                         break;
                     }
                 }
             }else if(s=='R'){
                 for(int j=9;j>-1;j-=1){
                     if(mp[j]==0){
                         mp[j]=1;
                         break;
                     }
                 }
             }else{
                 mp[s-48]=0;
             }
         }
         f1(10){
             cout<<mp[i];
         }
        
    return 0;
}