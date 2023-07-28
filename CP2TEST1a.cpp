#include<bits/stdc++.h>
using namespace std;

int main(){
    //while(1){
        int a,b;
        cin>>a>>b;
        if(a%2!=0&&b%2!=0){
            cout<<"BOTH"<<endl;
        }else if(a%2!=0&&b%2==0||a%2==0&&b%2!=0){
            cout<<"ONE"<<endl;
        }else{
            cout<<"NONE"<<endl;
        }

    //}

    return 0;
}