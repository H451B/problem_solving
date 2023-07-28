#include <bits/stdc++.h>
using namespace std;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    syncC;
    //io;

    int x,y,z,a=0,b=1,j=0;
    //vector<int,int>vi;
    long long xx[10][10];
    cin>>x;
    for(int i=0;i<x;i+=1){
        cin>>y;
        while(y/10!=0&&y%10!=0){
            a++;
            if(y%10==0){
                b*=10;
                y=y/10;
            }else{
                cout<<(y%10)*b<<" ";
                xx[i][j]=(y%10)*b;
                j+=1;
                b*=10;
                y=y/10;
            } 
        }
        xx[i][j]=y/10*b;
            cout<<"a="<<a;
            a=0;
            cout<<endl;
        j=0;
        b=1;
    }
    for(int i=0;i<x;i+=1){
        for(int j=0;j<4;j+=1){
            cout<<xx[i][j]<<" ";
        }
        cout<<endl;
    }


   return 0;
}