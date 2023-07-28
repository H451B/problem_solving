#include<bits/stdc++.h>
using namespace std;

#define io

int main(){

    long long z;
    cin>>z;
    while(z--){
        long long x,y,a,b,m,n,o,p;
        cin>>x>>y>>a>>b;
        m=max(x,y)-min(x,y); 
        n=max(x,y)-m;
        o=max(x,y)*b;
        
        cout<<min(min(((m*a)+(n*b)),((x*a)+(y*a))), ((o)+(m*a)))<<endl;
        // cout<<min(((m*a)+(n*b)),((x*a)+(y*a)));
    }
    return 0;
}
