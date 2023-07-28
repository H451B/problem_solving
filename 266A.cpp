#include <bits/stdc++.h>
using namespace std;

#define f1(n) for(int i=0;i<n;i+=1)

int main(){
    int x,y=0;;
    string s;
    cin>>x;
    cin>>s;
    s[s.size()]='k';
    f1(s.size()){
        if(s[i]==s[i+1]){
            y+=1;
        }
    }
    cout<<y;

   return 0;
}