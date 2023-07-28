#include <bits/stdc++.h>
using namespace std;

#define f1(n) for(int i=0;i<n;i+=1)

int main(){
    int x,b=0,c;
    vector<int>v;
    f1(4){
        cin>>x;
        v.push_back(x);
    }
    string s;
    cin>>s;
    c=s.size();
    f1(c){
        if(s[i]-48==1){
            b+=v[0];
        }else if(s[i]-48==2){
            b+=v[1];
        }else if(s[i]-48==3){
            b+=v[2];
        }else{
            b+=v[3];
        }
    }
    cout<<b;

   return 0;
}