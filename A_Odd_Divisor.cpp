#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    string s;
    cin>>x;
    while(x--){
        cin>>s;
        if((s[s.size()-1]-48)%2!=0){cout<<"YES\n";}
        else{cout<<"NO\n";}
        s.clear();
    }

    return 0;
}