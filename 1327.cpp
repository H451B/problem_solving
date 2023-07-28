#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,i,o=0,p=0;
    cin>>n>>k;
    int a[k];
    for(int j=0;i<n;j+=1){
        o+=1;
    for(int i=0;i<k-o;i+=1){
        a[i]=1;
        p+=a[i];
    }
    for(int i=1;i<n;i+=2){
        p+=2;
        if(p==n){
            break;
        }
        if(i==n-1){
            a[k-1]=a[(k-1)+2];
        }
    }
    }
    if(p)

   return 0;
}