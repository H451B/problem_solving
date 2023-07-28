#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x;
    while(x--){
        cin>>y;
        if(y<2){cout<<1<<endl;}
        else{
            cout<<y<<" ";
            for(int i=1;i<y;i+=1){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}