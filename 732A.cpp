#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    CStream;

    int x,y,i=1;
    cin>>x>>y;
    while(1){
        if((x*i)%10==0||(x*i)%10==y){
            break;
        }
        i+=1;
    }
    cout<<i;

   return 0;
}