#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    cin>>a;
    while(a--){
        cin>>b>>c;
        if(b>c){
            if(b%c!=0){
                d=b/c;
                d=d+1;
                if((d*c)%c==0){
                    cout<<(d*c)-b<<endl;
                }
            }else{
                cout<<"0"<<endl;
            }
        }else if(b<c){
            cout<<c-b<<endl;
        }else if(b==c){
            cout<<"0"<<endl;
        }
    }

   return 0;
}