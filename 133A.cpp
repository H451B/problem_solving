#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    bool f=true;
    cin>>s;
    for(int i=0;i<s.size();i+=1){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'||s[i]=='+'){
            cout<<"YES";
            f=false;
            break;
        }
    }
    if(f){
        cout<<"NO";
    }

    return 0;
}