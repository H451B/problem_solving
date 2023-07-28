#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int k=0;k<n;k+=1)
#define fi freopen("i.txt","r",stdin)
#define fo freopen("o.txt","w",stdout)

int main(){
    //fi;
    //fo;
    CStream;

    int x,y,a=0,b=0,i,j;
    vector<int>v;
    cin>>x;
    f1(x){
        cin>>y;
        v.push_back(y);
    }
    i=0,j=x-1,y=x;
    while(i!=j){
        if(x%2==0){
            //a+=max(v[i],v[j]);
            if(v[i]>v[j]){
                a+=v[i];
                i+=1;
            }else{
                a+=v[j];
                j-=1;
            }
        }else{
            if(v[i]>v[j]){
                b+=v[i];
                i+=1;
            }else{
                b+=v[j];
                j-=1;
            }
        }
        x--;
    }
    if(y%2==0){
        cout<<a<<" "<<b+v[i];
    }else{
        cout<<b+v[i]<<" "<<a;
    }

   return 0;
}