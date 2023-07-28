#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int y,z,a,b=0;
        string s;
        cin>>y>>z;
        for(int i=0;i<z;i+=1){
            s+='B';
        }
        for(int i=0;i<y;i+=1){
            cin>>a;
            b=(z+1)-a;
            if(a<=b && s[a-1]=='B'){s[a-1]='A';}
            else if(b<=a && s[b-1]=='B'){s[b-1]='A';}
            else if(s[a-1]=='B'){s[a-1]='A';}
            else if(s[b-1]=='B'){s[b-1]='A';}
            else{s[a-1]='A';}
        }
        cout<<s<<endl;
    }
}