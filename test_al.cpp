#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    vector<int>v[a];
    for(int i=5;i<8;i+=1){
        for(int j=1;j<=3;j+=1){
            v[i].push_back(j*3);
        }
    }
    for(int i=0;i<10;i+=1){
        cout<<v[i].size()<<endl;
    }
}