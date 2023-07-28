#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)

int main(){
    syncC;
    //io;

    string s="0qwertyuiopasdfghjkl;zxcvbnm,./1",s3,s4;
    int x,y,z,i=0,j=1,k=2,l=0;
    map<char,pair<char,char>>mp;

    while(j<=30){
        mp[s[j]-96]=make_pair(s[i],s[k]);
        i+=1;j+=1;k+=1;
    }
    cin>>s3>>s4;
    f1(0,s4.size()-1){
        s3=="R"?cout<<mp[s4[i]-96].first:cout<<mp[s4[i]-96].second;
    }

   return 0;
}