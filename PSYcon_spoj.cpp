#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))
#define inf 10000040
bool a[inf];
vector<ll>v;

void sieve(){
    memset(a,true,sizeof(a));
    for(int i=4;i<=inf;i+=2){a[i]=false;}
    for(int i=3;i<=sqrt(inf);i+=2){
        if(a[i]==true){
            for(int j=i*i;j<=inf;j+=i){
               a[j]=false;
            }
        }
    }
    v.push_back(2);
    for(int i=3;i<=inf;i+=2){
        if(a[i]==true){v.push_back(i);}
    }
}

int main(){
    syncC;
    //io;

    ll x,y,z,a,b,c;
    sieve();
    cin>>z;
    while(z--){
        x=0,y=0;
        cin>>a;
        if(a==0||a==1){cout<<"Ordinary Number"<<endl;}
        for(int i=0;v[i]<=sqrt(a);i++){
            if(a%v[i]==0){
                b=0;
                while(a%v[i]==0){
                    a/=v[i];
                    b++;
                }
                if(b%2==0){x+=1;}
                else{y+=1;}
            }
        }
        if(a>1){y+=1;}
        if(x>y){cout<<"Psycho Number"<<endl;}
        else{cout<<"Ordinary Number"<<endl;}
    }
    return 0;
}