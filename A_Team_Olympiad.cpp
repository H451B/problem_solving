#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define pb push_back

int main(){
    syncC;
    //io;
   
    int a,b,c=0,x=0,y=0,z=0;
    vector<int>v1,v2,v3;
    cin>>a;
    f1(1,a){
        cin>>b;
        if(b==1){x+=1;v1.pb(i);}
        else if(b==2){y+=1;v2.pb(i);}
        else{z+=1;v3.pb(i);}
        c=min(x,y);c=min(c,z);
    }
    cout<<c<<endl;
    f1(0,c-1){cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;}

   return 0;
}