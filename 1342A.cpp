#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    CStream;
    int z;
    cin>>z;
    while(z--){
        long long x,y,a,b,m,n;
        cin>>x>>y>>a>>b;
        m=max(x,y)-min(x,y);
        n=max(x,y)-m;
        cout<<(m*a)+(n*b)<<endl;
    }

   return 0;
}