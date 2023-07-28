#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)

int main(){
    syncC;
    //io;

    int x;
    cin>>x;
    double y=ceil(sqrt(x));
    if(x<=y*(y-1)){
        cout<<y+(y-1);
    }else if(x<=y*y){
        cout<<y+y;
    }

   return 0;
}