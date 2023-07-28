#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int y;
        cin>>y;
        if(y%2){
            cout<<-1<<endl;
        }else{
            cout<<y/2<<" "<<0<<" "<<0<<endl;
        }
    }
    return 0;
}