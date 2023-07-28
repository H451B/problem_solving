#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=0;i<n;i+=1)
#define fi freopen('i.txt','r',stdin)
#define fo freopen('o.txt','w',stdout)

int main(){
    //fi;
    //fo;
    //CStrean;

    int x,y,z;
    cin>>x>>y;
    if(max(x,y)==1){cout<<"1/1";}
    else if(max(x,y)==2){cout<<"5/6";}
    else if(max(x,y)==3){cout<<"2/3";}
    else if(max(x,y)==4){cout<<"1/2";}
    else if(max(x,y)==5){cout<<"1/3";}
    else{cout<<"1/6";}

   return 0;
}
