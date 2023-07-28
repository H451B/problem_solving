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
        int y,z=0;
        string s,r;
        cin>>y>>s;
        map<char,int>m;
        for(int i=0;i<s.size();i+=1){
            m[s[i]]+=1;
        }
        // for(int i='a';i<='z';i+=1){
        //     if(m[i]==0){cout<<char(i)<<endl;z=1;break;}
        // }
        // size_t sstr = s.find(aaa);
        string t="aa";
        if(s.find(t) != string::npos){
            cout<<"y\n";
        }else{
            cout<<"n\n";
        }
        if(z==0){
            for(int i=0;i<m['a'];i+=1){
                r+='a';
            }
            cout<<r+'a'<<endl;
        }
    }

   return 0;
}