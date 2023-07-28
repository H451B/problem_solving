#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

int main(){
    syncC;
    //io;

    ll a,x,y,z;
    cin>>a;
    while(a--){
        cin>>x>>y>>z;
        // if(x>z){
        //     cout<<"0"<<endl;
        // }else{
            int i=z%x;
            if(i>y){cout<<z-(i-y)<<endl;}
            else if(i<y){
                z=z-i;
                cout<<z-(x-y)<<endl;
            }else{cout<<z<<endl;}
        //}
    }

   return 0;
}