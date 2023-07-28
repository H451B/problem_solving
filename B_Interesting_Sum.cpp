#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int y,z,l,r;
        cin>>y;
        vector<int>arr;
        for(int i=0;i<y;i+=1){
            cin>>z;
            arr.push_back(z);
        }
        sort(arr.begin(),arr.end());
        cout<<(arr[y-1]-arr[0])+(arr[y-2]-arr[1])<<endl;
    }
}