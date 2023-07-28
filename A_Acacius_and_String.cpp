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

    ll x,y,j,k,l=0,m,n,o,a,t;
    string s,r="abacaba",ans;
    cin>>t;
	read:
	while(t--){
		cin>>n>>s;
		for(ll i=0;i+r.size()<=n;i+=1){
			string ans=s;o=1;
			for(ll j=0;j<r.size();j+=1){
				if(ans[i+j]!='?' && ans[i+j]!=r[j]){
					o=0;break;
				}
				ans[i+j]=r[j];
			}
            l=0;
	        for(ll i=0;i<ans.length();i+=1){
                if(ans.substr(i,r.length())==r){
                    l+=1;
                }
            }
			if(o && l==1){
				for(i=0;i<n;i+=1){
					if(ans[i]=='?') ans[i]='d';
				}
				cout<<"Yes"<<endl<<ans<<endl;
				goto read;
			}
		}
		cout<<"No"<<endl;
	}

   return 0;
}
 
