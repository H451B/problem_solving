#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    while (a--){
        int b;
        cin>>b;
        int c=1,d=b*3;

        if(b%2==0){
            cout<<b/2<<endl;
            for(int i=0;i<b/2;i+=1){
                cout<<c<<" "<<d<<endl;
                c+=3;
                d-=3;
            }
        }else{
            cout<<(b+1)/2<<endl;
            for(int i=0;i<(b+1)/2;i+=1){
                cout<<c<<" "<<d<<endl;
                c+=3;
                d-=3;
            }

        }
    }

    return 0;
}