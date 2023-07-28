#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fi freopen("i.txt","r",stdin)
#define fo freopen("o.txt","w",stdout)

int main(){
    // fi;
    // fo;
    CStream;

    int x;
    string s;
    cin>>x;
    while(x--){
        cin>>s;
        if((s-48)==78||(s-48)==1||(s-48)==4){
            cout<<"+"<<endl;
        }else if((s-48)==(78*100)+35||(s-48)==(1*100)+35||(s-48)==(4*100)+35){
            cout<<"-"<<endl;
        // }else if(s-48==(190*100)+78||s-48==(190*10)+1||s-48==(190*10)+4){
        //     cout<<"?"<<endl;
        // 
        }else{
            cout<<"*"<<endl;
        }
    }

   return 0;
}