#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int x,y,z,a=0;
    cin>>x;
    while(x--){
        cin>>y>>z;
        a+=z;
        a-=y;
        v.push_back(a);
    }
    cout<<*max_element(v.begin(), v.end());

   return 0;
}