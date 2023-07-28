#include <bits/stdc++.h>
using namespace std;

#define f1(n) for(int i=0;i<n;i+=1)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    f1(s.size()){
        if(s[i]=='.'){
            cout<<0;
        }else if(s[i]=='-'&&s[i+1]=='-'){
            cout<<2;
            i+=1;
        }else if(s[i]=='-'&&s[i+1]=='.'){
            cout<<1;
            i+=1;
        }
    }

   return 0;
}