#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

int main(){
    syncC;
    //io;
     
    ll i;
    string s,c;
    cin>>s;
    for(i=0;i<s.size();i+=1){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i+=2;
            if(c[0]!='\0'&&c[c.size()-1]!=' '){c+=' ';}
        }
        else{c+=s[i];}
    }
    
    cout<<c;

   return 0;
}