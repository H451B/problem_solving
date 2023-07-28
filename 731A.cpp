#include<bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=1;i<n;i+=1)

int main(){
    CStream;

    string s;
    int x=0;
    cin>>s;
    x=min(abs((s[0]-96)-1),abs((s[0]-96)-27));
    f1(s.size()){
        x+=min(abs((s[i]-96)-(s[i-1]-96)),((min(s[i]-96,s[i-1]-96)+26)-max(s[i]-96,s[i-1]-96)));
    }
    cout<<x;

   return 0;
}