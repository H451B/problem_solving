#include<bits/stdc++.h>
using namespace std;

#define fi freopen("i.txt","r",stdin)
#define fo freopen("o.txt","w",stdout)
#define pb push_back 

int main(){
    //fi;
    //fo;
    vector<int>v,v1;
    int x,y,z;
    while(cin>>x){
        for(int i=0;i<x;i+=1){
            cin>>y;
            v.pb(y);
        }
        cin>>y;
        for(int i=0;i<y;i+=1){
            cin>>z;
            //v.pb(z);
            int s=0,r=x-1,mid;
            bool f=true;
            while(!(s>r)){
                mid=(s+r)/2;
                if(v[mid]==z){
                    f=false;
                    break;
                }else if(v[mid]>z){
                    r=mid-1;
                }else{
                    s=mid+1;
                }
            }
            if(!f){
                if(v[x-1]==v[mid]){
                    for(int i=mid-1;i>-1;i-=1){
                        if(v[i]!=v[mid]){
                            cout<<v[i]<<" "<<"X"<<endl;
                            break;
                        }
                    }
                }else if(v[0]==v[mid]){
                    for(int i=mid+1;i<x;i+=1){
                        if(v[i]!=v[mid]){
                            cout<<"X"<<" "<<v[i]<<endl;
                            break;
                        }
                    }
                }else{
                    for(int i=mid-1;i>-1;i-=1){
                        if(v[i]!=v[mid]){
                            cout<<v[i]<<" ";
                            break;
                        }
                    }
                    for(int i=mid+1;i<x;i+=1){
                        if(v[i]!=v[mid]){
                            cout<<v[i]<<endl;
                            break;
                        }
                    }
                }
            }else{
                if(s==0){
                    cout<<"X"<<" "<<v[s]<<endl;
                }else if(r==x-1){
                    cout<<v[r]<<" "<<"X"<<endl;
                }else{
                    cout<<v[r]<<" "<<v[s]<<endl;
                }
            }
        }
    }

    return 0;
}