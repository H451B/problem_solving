#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)

int main(){
    syncC;
    //io;

    set<char>st;
    int x=0;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i+=1){
        if(s[i]>='a'&& s[i]<='z'){
            st.insert(s[i]);
        }
    }
    for(auto i:st){x+=1;}
    cout<<x;

   return 0;
}