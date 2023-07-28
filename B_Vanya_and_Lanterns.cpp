#include<bits/stdc++.h>
using namespace std;

#define f1(n,m) for(int i=n;i<=m;i+=1)
#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
int main(){
    syncC;

    double x,y,z;
    vector<double>v;
    cin>>x>>y;
    f1(0,x-1){
        cin>>z;
        v.push_back(z);
    }

    sort(v.begin(),v.end());
    z=max(v[0],y-v[x-1]);

    f1(0,x-1){
        z=max(z,(v[i+1]-v[i])/2.0);
    }
    cout<<fixed<<setprecision(10)<<z<<endl;

    return 0;
}