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

    string s;
    int i=1;
    while(cin>>s){
        if(s=="#")break;
        cout<<"Case "<<i;
        s=="HELLO"?cout<<": ENGLISH\n":s=="HOLA"?cout<<": SPANISH\n":s=="HALLO"?cout<<": GERMAN\n":s=="BONJOUR"?cout<<": FRENCH\n":s=="CIAO"?cout<<": ITALIAN\n":s=="ZDRAVSTVUJTE"?cout<<": RUSSIAN\n":cout<<": UNKNOWN\n";
        i+=1;
    }

   return 0;
}