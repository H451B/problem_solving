#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z,a,b;
    vector<char>v;
    cin>>x;
    while(x--){
        cin>>y>>z;
        for(int i=0;i<y;i+=1){
            if(i>=y-2){
                v.push_back('b');
            }else{
                v.push_back('a');
            }
        }
        if(z==1){
            for(int i=0;i<y;i+=1){
            cout<<v[i];
          }
        }else if(z%2==0){
            a=(y-2)-z;
            if(a>0){

            }
        }
        
        // for(int i=0;i<y.size();i+=1){
        //     if(z==1){
        //         cout<<
        //     }
        // }
    }

   return 0;
}