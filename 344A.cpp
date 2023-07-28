#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=0;i<n;i+=1)

int main(){
    CStream;
    
    int x,y,z=1;
    vector<int>v;
    cin>>x;
    f1(x){
        cin>>y;
        v.push_back(y);
    }
    v.push_back(v[x-1]);
    f1(x){
        if(v[i]!=v[i+1]){
            z+=1;
        }
    }
    cout<<z;

   return 0;
}