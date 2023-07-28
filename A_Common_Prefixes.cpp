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

    ll x,y,z,c=0,i,j;
    vector<int>v;
    string s,r;
    cin>>x;
    while(x--){
        cin>>y;
        v.clear();s.clear();c=0;
        f1(0,y-1){cin>>z;v.push_back(z);c=max(z,c);}
        for(i=0;i<=c;i+=1){s+='a';}
        cout<<s<<endl;
        for(i=0;i<v.size();i+=1){
            for(j=0;j<v[i];j+=1){
                cout<<s[j];
            }
            for(;j<s.size();j+=1){
                if(s[j]=='a')s[j]+=1;
                else if(s[j]=='b')s[j]-=1;
                cout<<s[j];
            }
            cout<<endl;
        }
    }

   return 0;
}