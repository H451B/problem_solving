#include<bits/stdc++.h>
using namespace std;

#define f1(x) for(int i=0;i<x;i+=1)

int main(){
        string s;
        cin>>s;
        f1(s.size()){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                s[i]=s[i]+1;
            }
        }
        cout<<s;

    return 0;
}