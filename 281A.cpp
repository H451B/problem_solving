#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    if(s[0]!=toupper(s[0])){
        s[0]=toupper(s[0]);
        cout<<s;
    }else{
        cout<<s;
    }

    return 0;
}
