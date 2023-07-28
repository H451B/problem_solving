#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fi freopen("i.txt","r",stdin)
#define fo freopen("o.txt","w",stdout)

int main(){
    // fi;
    // fo;
    CStream;

    long long x;
    string s;
    cin>>x;
    while(x--){
        cin>>s;
        if(s.size()==2||s.size()==1){
            cout<<"+"<<endl;
        }else if(s[s.size()-1]=='5'&&s[s.size()-2]=='3'){
            cout<<"-"<<endl;
        }else if(s[0]=='9'&&s[s.size()-1]=='4'){
            cout<<"*"<<endl;
        }else{
            cout<<"?"<<endl;
        }
    }

   return 0;
}