#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,a,b;
    cin>>x;
    while(x--){
        int y;
        cin>>y;
        if(y%3==0){cout<<y/3<<" "<<y/3<<endl;}
        else if(y%3==1){cout<<y/3+1<<" "<<y/3<<endl;}
        else{
            cout<<y/3<<" "<<y/3+1<<endl;
        }

    }
    return 0;
}