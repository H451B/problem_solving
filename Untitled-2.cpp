#include <bits/stdc++.h>
using namespace std;
#define frn(n,m) for(int i=n;i<=m;i+=1)
int main(){
    double x,y,z,a,b,c;
    vector<double>v;
    cin>>x;
    while(x--){
        cin>>y>>z;
        c=0;b=0;
        frn(0,y*z-1){cin>>a;v.push_back(a);}
        a=ceil(y/2);
        for(int i=(v.size()-1)-(y-a);i>-1;i-=y-a+1){
            c+=v[i];b+=1;
            if(b==z)break;
        }
        cout<<c<<endl;
        v.clear();
    }
 
   return 0;
}