#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int a,b,c;
        string s;
        cin>>a>>b;
        if(a<=b){
            c=a;
            for(int i=0;i<a+b;i+=1){
                if(i%2==0&&c>0){s+='0';c--;}
                else{s+='1';}
            }
        }else{
            c=b;
            for(int i=0;i<a+b;i+=1){
                if(i%2==0&&c>0){s+='1';c--;}
                else{s+='0';}
            }
        }
        cout<<s<<endl;
    }

    return 0;
}