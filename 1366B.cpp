#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int a,b,c,y,z,min=INT_MAX,max=-1,res=0;
        cin>>a>>b>>c;
        int b1=b,b2=b;
        vector<pair<int,int>>v;
        for(int i=0;i<c;i+=1){
            cin>>y>>z;
            if(res=1){
                if(y<=b1&&z>=b1){b1=y;z>b2?b2=z:b2=b2;}
                else if(y<=b2&&z>=b2){b2=z;y<b1?b1=y:b1=b1;}
            }
            if(b1>=y&&b2<=z){
                res=1;    
                b1=y;
                b2=z;
            }
        }
        cout<<b2-b1+1<<endl;
    }
}