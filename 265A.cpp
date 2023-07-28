#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=0;i<n;i+=1)

int main(){
    CStream;

    int j=0;
    string s,s1;

    cin>>s>>s1;
    f1(s1.size()){if(s1[i]==s[j]){j+=1;}}
    cout<<j+1;

    return 0;
}