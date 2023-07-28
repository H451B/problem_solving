#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=1;i<=n;i+=1)

int main(){
    CStream;

    vector<long long>v;
    long long x,y,z;
    cin>>x>>y;
    v.push_back(0);
    f1(x){
        cin>>z;
        v.push_back(z);
        v[i]+=v[i-1];
    }
    f1(y){
        cin>>z;
        cout<<lower_bound(v.begin(),v.end(),z)-v.begin()<<" "<<z-v[(lower_bound(v.begin(),v.end(),z)-v.begin())-1]<<endl;
    }

   return 0;
}
