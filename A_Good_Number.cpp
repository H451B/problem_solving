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

    string s,r;
    set<int>st;
    ll x,y,z=0,k=0;
    cin>>x>>y;
    f1(0,y){r+=i+48;}
    while(x--){
        cin>>s;
        f1(0,s.size()-1){st.insert(s[i]-48);}
        s.clear();
        for(auto i:st)s+=i+48;
        st.clear();
        f1(0,s.size()-1){if(s[i]==r[i])k+=1;}
        if(k==r.size()){z+=1;}
        k=0;
    }
    cout<<z;

   return 0;
}