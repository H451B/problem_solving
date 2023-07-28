#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int y,a=0,b=0,c=0,d=0,p,q;
        cin>>y;
        for(int i=0;i<y;i+=1){
            cin>>p>>q;
            if(p>0&&p>=a){a=p;}
            else if(p<0&&p<=b){b=p;}
            else if(q>0&&q>=c){c=q;}
            else if(q<0&&q<=d){d=q;}
        }
        cout<<a*2+abs(b*2)+c*2+abs(d*2)<<endl;
    }
}