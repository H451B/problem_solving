#include <bits/stdc++.h>
using namespace std;

int main(){
    double x,y,z=0;
    cin>>x;
    for(int i=0;i<x;i+=1){
        cin>>y;
        z+=y;
    }
    cout<<fixed;
    cout<<setprecision(12)<<z/x;

   return 0;
}