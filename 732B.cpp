#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(j,n) for(int i=j;i<n;i+=1)
int main(){
    CStream;

    vector<int>v;
    int x,y,z;
    cin>>x>>y;
    f1(0,x){
        cin>>z;
        v.push_back(z);
    }
    z=0;
    f1(1,x){
        if(v[i-1]+v[i]<y){
            z+=y-(v[i-1]+v[i]);
            v[i]=y-v[i-1];
        }
    }
    cout<<z<<endl;
    for(auto it:v){cout<<it<<" ";}
   return 0;
}