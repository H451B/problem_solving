#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(int i=0;i<n;i+=1)

int main(){
    CStream;
    int x,y=0;
    set<int>st;
    f1(4){cin>>x;st.insert(x);}
    st.size()==4?cout<<"0":cout<<4-st.size();

   return 0;
}
