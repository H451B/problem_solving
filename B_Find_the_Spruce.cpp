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

    ll x,y,z,r;
    char a;
    cin>>x;
    while(x--){
        cin>>y>>z;
        ll arr[y+1][z+1];
        memset(arr, -1, sizeof arr);
        r=0;
        ll xx=1;
        f1(1,y){
            for(int j=1;j<=z;j+=1){
                cin>>a;
                if(a=='*'){
                    r+=1;
                    if(arr[i][j-1]==xx){
                        arr[i][j]=xx;
                    }else{
                        xx+=1;
                        arr[i][j]=xx;
                    }
                }
            }
        }
        ll l;
        f1(1,y){
            for(int j=1;j<=z;j+=1){
                if(arr[i][j]>-1){
                l=1;
                for(int k=i+1;k<=y;k+=1){
                    if((arr[i+l][j-l]==arr[i+l][j+l])&&arr[i+l][j-l]!=-1){
                        r+=1;
                    }else{break;}
                    l+=1;
                }
                }
            }
        }
        cout<<r<<endl;
    }

   return 0;
}