#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    char s[s1.size()];
    for(int i=0;i<s1.size();i+=1){
        if(s1[i]>s2[i]){
            s[i]=s1[i];
        }else if(s1[i]==s2[i]){
            s[i]='0';
        }else if(s1[i]<s2[i]){
            s[i]=s2[i];
        }
    }
    s[s1.size()]='\0';
    cout<<s;

   return 0;
}
