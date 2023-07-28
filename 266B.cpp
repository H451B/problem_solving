#include <bits/stdc++.h>
using namespace std;

#define f1(n) for(int i=0;i<n;i+=1)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    string s;
    vector<char>v;
    cin>>x>>y;
    cin>>s;
    f1(s.size()){
        v.push_back(s[i]);
    }
    f1(x){
        if(y!=0){
            if(v[i]=='B'){
                swap(v[i],v[i+1]);
                y-=1;
            }
        }
    }
    f1(x){
        cout<<v[i];
    }


   return 0;
}