#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)

int main(){
    syncC;
    //io;

    int x,y,z=0;
    vector<int>v;
    cin>>x;
    f1(0,x-1){
        cin>>y;
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    f1(0,x-1){
        if(v[i]!=v[0]&&v[i]!=v[x-1]){
            z+=1;
        }
    }
    cout<<z;

   return 0;
}