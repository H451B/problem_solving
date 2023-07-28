#include <bits/stdc++.h>
using namespace std;

#define f1(n) for(int i=0;i<n;i+=1)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a=0,b=0;
    string s;
    cin>>s;
    f1(s.size()){
        if(s[i]<='Z'&&s[i]>='A'){
            a+=1;
        }else{
            b+=1;
        }
    }
    if(a>b){
        f1(s.size()){
            transform(s.begin(),s.end(),s.begin(),::toupper);
        }
    }else{
        f1(s.size()){
           transform(s.begin(),s.end(),s.begin(),::tolower);
        }
    }
    cout<<s;

   return 0;
}