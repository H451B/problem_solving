#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=0;i<n;i+=1)

int main(){
    CStream;

    int x,a,b,c,z;
    cin>>x;
    while(x--){
        cin>>a>>b>>c;
        z=c*10;
        while(b--){
            if(a<=z)break;
            a=(a/2)+10;
        }
        while(c--){
            a=a-10;
        }
        (a<=0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }

   return 0;
}