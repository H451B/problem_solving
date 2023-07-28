#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(i) cout<<"test "<<i<<endl;
#define f1(i,n,m) for(int i=n;i<=m;i+=1)
#define f2(i,n,m) for(int i=n;i>=m;i-=1)
#define f3(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
bool solve(){};

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    int x;
    cin>>x;
    while(x--){
        string s,r;
        cin>>s>>r;
        set<char>st;
        st.insert(s[0]);
        st.insert(s[1]);
        st.insert(r[0]);
        st.insert(r[1]);
        if(st.size()==4){cout<<3<<endl;}
        else if(st.size()==3){cout<<2<<endl;}
        else if(st.size()==2){cout<<1<<endl;}
        else if(st.size()==1){cout<<0<<endl;}

    }

   return 0;
}