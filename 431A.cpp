#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=0;i<n;i+=1)

int main(){
    CStream;
    
    int x,y=0;
    map<int,int>mp;
    f1(4){
        cin>>x;
        mp[i+1]=x;
    }
    string s;
    cin>>s;
    f1(s.size()){
        y+=mp[s[i]-48];
    }
    cout<<y;

   return 0;
}