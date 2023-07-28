#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(i,n,m) for(int i=n;i<=m;i+=1)
#define f2(i,n,m) for(int i=n;i>=m;i-=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
bool solve(){};

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    string s;
    int x=0,y=0,z=0,a=0;
    cin>>s;
    if(s.size()>=6){
    f1(i,0,s.size()-1){
        if(s[i]==toupper(s[i])){x+=1;}
        if(s[i]==tolower(s[i])){y+=1;}
        if(s[i]>=48&&s[i]<=57){z+=1;}
    }
    if(x>1&&y>1&&z>0){cout<<"True\n";}
    else{cout<<"False\n";}
    }
    else{cout<<"False\n";}

   return 0;
}