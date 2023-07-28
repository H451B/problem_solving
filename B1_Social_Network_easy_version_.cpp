#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(int i=n;i>=m;i-=1)
#define f3(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
ll solve(){};

int main(){
    syncC;
    //io;

    ll x,y,z;
    set<ll>s;
    deque<ll>d;
    cin>>x>>y;
    f1(0,x-1){
        cin>>z;
        if(s.find(z)==s.end()){
            if(d.size()>=y){s.erase(d.front()); d.pop_front();}
            d.push_back(z);
            s.insert(z);
        }
    }
    cout<<d.size()<<endl;
    f2(d.size()-1,0){cout<<d[i]<<" ";}

    return 0;
}

// 	long long x,y,z,a,b=0,c;
// 	cin>>x>>y;
//  long long v1[x],v2[y]={0};

// 	f1(0,x-1){
// 		cin>>v1[i];
// 	}

// 	f1(0,x-1){
// 		a=1;
// 		for(int j=0;j<y;j+=1){
// 			if(v1[i]==v2[j]){
// 				a=0;
// 				break;
// 			}
// 		}
// 		if(a==1){
// 			f2(y-2,0){
// 				v2[j+1]=v2[j];
// 			}
// 			v2[0]=v1[i];
// 		}
// 	}

// 	f1(0,y-1){
// 		if(v2[i]!=0){b+=1;}
// 	}
    
// 	cout<<b<<endl;
// 	f1(0,y-1){
// 		if(v2[i]!=0){cout<<v2[i]<<" ";}
// 	}