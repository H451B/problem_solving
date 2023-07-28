#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=0;i<n;i+=1)
#define fi freopen("i.txt","r",stdin)
#define fo freopen("o.txt","w",stdout)

int main(){
    // fi;
    // fo;
    CStream;
    
    int x,y,z,a=1;
    vector<int>v,v1;
    vector<int>::iterator it;
    while(1){
        cin>>x>>y;
        if(!x&&!y)break;
        f1(x)cin>>z,v.push_back(z);
        sort(v.begin(),v.end());
        f1(y)cin>>z,v1.push_back(z);
        cout<<"CASE# "<<a<<":"<<endl;a+=1;
        f1(y){
            bool c=binary_search(v.begin(),v.end(),v1[i]);
            int b=lower_bound(v.begin(),v.end(),v1[i])-v.begin();
            if(c){
                cout<<v1[i]<<" found at "<<b+1<<endl;
            }else{
                cout<<v1[i]<<" not found"<<endl;
            }
        }
        v.clear();v1.clear();
    }

   return 0;
}