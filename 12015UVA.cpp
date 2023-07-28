#include <bits/stdc++.h>
using namespace std;

#define CStream ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f1(n) for(long j=0;j<n;j+=1)
#define fi freopen("i.txt","r",stdin)
#define fo freopen("o.txt","w",stdout)

int main(){
    // fi;
    // fo;
    CStream;
    vector<pair<long,string>>v;
    string s;
    long n,r,i;
    cin>>n;
        f1(n){
            i=0;
            while(i<10){
                cin>>s>>r;
                v.push_back(make_pair(r,s));
                i+=1;
            }
            cout<<"Case #"<<j+1<<":"<<endl;
            sort(v.begin(),v.end(),[](const pair<int,string> &left,const pair<int,string> &right){
                return left.first>right.first;
            });
            i=0;
            while(i<10){
                if(v[i].first==v[i+1].first){
                    cout<<v[i].second<<endl;
                    i+=1;
                }else{
                    cout<<v[i].second<<endl;
                    break;
                }
            }
            v.clear();
        }

   return 0;
}