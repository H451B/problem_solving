#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)

int pm(ll n,ll m){
    ll k=0,l;
    vector<ll>v;
    v.push_back(0);
    bool prime[n+1];
    prime[1]=true;
    memset(prime, true, sizeof(prime)); 
    for (ll p=2; p*p<=n; p++) {
        if (prime[p] == true) {
            for (ll i=p*2; i<=n; i+=p) 
                prime[i] = false;
        } 
    }
    f1(1,n){if(prime[i]){k+=1;v.push_back(i);}}
    cout<<n<<" "<<m<<":";
    if(2*m>=k){
        f1(1,v.size()-1)cout<<" "<<v[i];
    }else if(k%2==0){
        l=(k-(2*m))/2;
        f1(l+1,(l+(2*m))){cout<<" "<<v[i];}
    }else{
        l=(k-((2*m)-1))/2;
        f1(l+1,l+((2*m)-1)){cout<<" "<<v[i];}
    }
    cout<<endl<<endl;
    return 0;
}

int main(){
    syncC;
    //io;

    ll x,y;
    while(cin>>x>>y){
        if(x==1){cout<<x<<" "<<y<<": "<<"1\n\n";}
        else{pm(x,y);}
    }

   return 0;
}