#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    long long b,d=0,e,f,g;
    cin>>f;
  for(int j=0;j<f;j+=1){
    cin>>a>>b;
    g=a.size();

    //make b positive;
    if(b<0){
        b=-b;
    }

    //make a positive
    if(a[0]=='-'){
        for(int k=0;k<g-1;k+=1){
            a[k]=a[k+1];
        }
        a[g-1]='\0';
        g=g-1;
    }
    
    for(int i=0;i<g;i+=1){
        d=d*10+(a[i]-48);
        cout<<d<<" ";
        d=d%b;
        cout<<d<<" "<<b<<endl;
        if(i==g-1){
            if(d==0){
                cout<<"Case "<<j+1<<": divisible"<<endl;
                break;
            }else{
                cout<<"Case "<<j+1<<": not divisible"<<endl;
                break;
            }
        }
    }
    d=0;
   }

    return 0;
}