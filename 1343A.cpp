#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define f1(n) for(int i=0;i<n;i+=1)
#define fi freopen("i.txt","r",stdin)
#define fo freopen("o.txt","w",stdout)

int main(){
    // fi;
    // fo;
    CStream;
    
    int x,y,z=0,a=1,b=2;
    vector<int>v;
    cin>>x;
    f1(x){
        cin>>y;
        v.pb(y);
    }
    f1(x){
        if((a+2*a)==v[i]){
            cout<<a<<endl;
        }else if((a+2*a+4*a)==v[i]){
            cout<<a<<endl;
        }else{
            cout<<"shawwa"<<endl;
         }
         a=1;
        }

   return 0;
}