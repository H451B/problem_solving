#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    string s;
    int x,y,z;
    cin>>x;
    while(x--){
        vector<string>v;
        map<ll,ll>mp;
        cin>>y>>z;
        for(int i=0;i<y;i+=1){
            cin>>s;
            v.push_back(s);
            for(int j=0;j<z;j+=1){
                mp[j]+=ll(s[j]);
            }
        }
        for(int i=0;i<y-1;i+=1){
            cin>>s;
             for(int j=0;j<z;j+=1){
                mp[j]-=ll(s[j]);
            }
        }
        string result;
        for(int j=0;j<z;j+=1){
            result+=char(mp[j]);
        }
        cout<<result<<endl;
    }

   return 0;
}