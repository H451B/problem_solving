#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
ll solve(){};

int main(){
    syncC;
    //io;

    string s;
    ll x,y,z;
    cin>>x;
    while(x--){
        cin>>y;
        cin>>s;
        if(y<4){cout<<"NO\n";}
        if(s[0]=='2'&&s[s.size()-3]=='0'&&s[s.size()-2]=='2'&&s[s.size()-1]=='0'){cout<<"YES"<<endl;}
        else if(s[0]=='2'&&s[1]=='0'&&s[s.size()-2]=='2'&&s[s.size()-1]=='0'){cout<<"YES"<<endl;}
        else if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[s.size()-1]=='0'){cout<<"YES"<<endl;}
        else if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[3]=='0'){cout<<"YES"<<endl;}
        else if(s[s.size()-4]=='2'&&s[s.size()-3]=='0'&&s[s.size()-2]=='2'&&s[s.size()-1]=='0'){cout<<"YES"<<endl;}
        else{cout<<"NO\n";}
    }

   return 0;
}