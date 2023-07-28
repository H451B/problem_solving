#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=0;i<n;i+=1)

int main(){
    CStream;
    int x,y,z=0,a=0;
    cin>>x;
    f1(x){
        cin>>y;
        z+=y;
        if(z<0){
            a+=1;
            z=0;
        }
    }
    cout<<a;

   return 0;
}