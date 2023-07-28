#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
 int t;
 cin>>t;
 while(t--)
 {
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     int x,y,x1,y1,x2,y2;
     cin>>x>>y>>x1>>y1>>x2>>y2;
     int minx=x-a+b,maxx=x+a+b,miny=y-c+d,maxy=y+c+d;
     if((x==x1 && x==x2 && (a!=0 || b!=0 )) && (y==y1 && y==y2 && (c!=0 || d!=0)))
     {
         cout<<"NO\n";
     }
     else if(x==x1 && x==x2 &&( a!=0 || b!=0))
     {
         cout<<"NO\n";
     }
     else if(y==y1 && y==y2 &&( c!=0 || d!=0))
     {
         cout<<"NO\n";
     }
     else if((minx>=x1 & minx<=x2)&&(miny<=y2 && miny>=y1))
     {
         cout<<"YES\n";
     }
     else
     cout<<"NO\n";
    //  cout<<minx<<" "<<maxx<<" "<<miny<<" "<<maxy<<endl;
     
 }
 
}