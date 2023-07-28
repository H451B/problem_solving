#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c=0,d,until,i,j;
    cin>>a>>b;
    until=b;

    int p[until+1];

    for(i = 2; i<=until; i++)
        p[i] = i;

    i = 2;
    while ((i*i) <= until){
        if (p[i] != 0){
            for(j=2; j<until; j++){
                if (p[i]*j > until)
                    break;
                else
                    p[p[i]*j]=0;
            }
        }
        i++;
    }

    for(i = a+1; i<=until; i++){
        if (p[i]!=0){
            c+=1;
            d=p[i];
            break;
        }
    }
    if(c==1&&b==d){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

   return 0;
}


