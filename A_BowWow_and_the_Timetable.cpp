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

	string s;
	cin>>s;
	ll m=s.size(); 
    //binary highest 1(1) 2(3) 3(7) 4(15) 5(31) . . . . . . . .
    //time 1 4 16 64 . . . . . . . . .
    //let s 10100(5)=20 highest 31 lowest 16 size 5
    //if 16+ then (17-31) size/2=2---(2-3)   size+1/2=3---(17-63)
	for(int i=s.size()-1; i>0; i--){
		if(s[i]=='1'){
			m++;
			break;
		}
	}
	cout<<m/2;

   return 0;
}