#include <bits/stdc++.h>
using namespace std;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    syncC;

    int x,y,z,a,b=0,c=0;
    cin>>x>>y>>z>>a;
    b=ceil((double)x/(double)z);
    (((b*y)-a)<=y)?cout<<"NO":cout<<"YES";

    return 0;
}