#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long x;
    cin>>x;
    while(x--){
        long long a,b,c,d,e,f,g;
        cin>>a>>b>>c>>d;
        if(b*c>d){cout<<-1<<endl;}
        else if(b*c==d){
            for(long long i=0;i<a-1;i+=1){
                cout<<0<<" ";
            }
            cout<<b*c<<endl;
        }else{
            e=d-(b*c);

            if(d-((b*c)+(b-1))>((a-1)*(b-1))){cout<<"-1"<<endl;}
            else{
                for(int i=0;i<a-1;i+=1){
                    if(e>=b-1){cout<<b-1<<" ";e-=(b-1);}
                    else{cout<<e<<" ";e-=e;}
                }
                if(e>0){cout<<(b*c)+e<<endl;}
                else{cout<<b*c<<endl;}
            }
        }
 
    }
    return 0;
}