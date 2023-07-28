#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

    ll x,y,z,a,b,c,d,e,f;
    cin>>x;
    while(x--){
        cin>>a>>b>>c;
        

    }

   return 0;
}

/*
P[1] = 1 ;
	for(int i = 2 ; i <= 9 ; ++i)
		P[i] = P[i-1] * 10 ;
	int t ;
	cin>>t ;
	while(t--)
	{
		cin>>a>>b>>c ;
		bool flag = false ;
		int x = P[a] , y = P[b] , z = P[c] ;
		if(x > y)
			swap(x , y) , flag = true ;
		y = (y + x-1) / x * x + z ;
		if(flag)
			swap(x , y) ;
		cout<<x<<" "<<y<<"\n" ;
	}
*/