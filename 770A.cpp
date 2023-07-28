#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=0;i<n;i+=1)

int main(){
    CStream;

    int x,y;
    char z;
    cin>>x>>y;
    f1(x){
        z='a'+i%y;
        cout<<z;
    }

   return 0;
}