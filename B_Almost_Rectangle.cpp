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

    ll x,y,z,a,b,c,d;
    cin>>x;
    while(x--){
        cin>>y;
        char arr[y][y];
        a=-1;b=-1;c=-1,d=-1;
        f1(i,0,y-1){
            f1(j,0,y-1){
                cin>>arr[i][j];
                if(arr[i][j]=='*'&&a==-1){a=i;b=j;}
                else if(arr[i][j]=='*'&&a!=-1){c=i;d=j;}
            }
        }
        if(a==c&&c<y-1){arr[a+1][b]='*';arr[c+1][d]='*';}
        else if(a==c&&c==y-1){arr[a-1][b]='*';arr[c-1][d]='*';}
        else if(b==d&&d<y-1){arr[a][b+1]='*';arr[c][d+1]='*';}
        else if(b==d&&d==y-1){arr[a][b-1]='*';arr[c][d-1]='*';}
        else if(a==d){arr[a][d]='*';arr[c][b]='*';}
        else if(c==b){arr[c][b]='*';arr[a][d]='*';}
        else{arr[a][d]='*';arr[c][b]='*';}
        f1(i,0,y-1){
            f1(j,0,y-1){
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }

   return 0;
}