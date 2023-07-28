#include <bits/stdc++.h>
using namespace std;

#define f1(n) for(int i=0;i<n;i+=1)
#define f2(m) for(int j=0;j<m;j+=1)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x[5][5],y,z;
    f1(5){
        f2(5){
            cin>>x[i][j];
            if(x[i][j]==1){
                y=i+1,z=j+1;
            }
        }
    }

    (y>=3)?y-=3:y=3-y;
    (z>=3)?z=y+(z-3):z=y+(3-z);

    cout<<z;


   return 0;
}