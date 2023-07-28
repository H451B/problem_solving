#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=0;i<n;i+=1)
#define fi freopen("i.txt","r",stdin)
#define fo freopen("o.txt","w",stdout)

int main(){
    // fi;
    // fo;
    CStream;

    double x1,x2,x3,y1,y2,y3,a,b,c,d;
    cin>>d;
    f1(d){
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        a=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
        b=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        c=acos(((b*b)+(b*b)-(a*a))/(2*b*b));
        cout<<"Case "<<i+1<<": "<<fixed<<setprecision(4)<<b*c<<endl;
    }

   return 0;
}