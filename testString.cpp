#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(i) cout<<"test "<<i<<endl;
#define f1(i,n,m) for(int i=n;i<=m;i+=1)
#define f2(i,n,m) for(int i=n;i>=m;i-=1)
#define f3(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,string> &a,const pair<int,string> &b){return (a.first>b.first);}
bool solve(){};

int main(){
    syncC;
    #ifdef io
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    #endif

    vector<string>v,strs;
    vector<pair<int,string>>s;
    // string s;
    int x=0,y=0;
    string r;
    strs.push_back("flower");
    strs.push_back("flow");
    strs.push_back("flight");

    for(int i=0;i<=strs[0].size();i+=1){
            r+=strs[0][i];
            for(int j=1;j<=strs.size();j+=1){
                if(strs[0][i]==strs[])
                x+=1;
            }
            if(x==strs.size()-1){y+=1;}
            if(y>0&&x!=strs.size()-1){
                y=0;
                s.push_back(make_pair(y+1,r));
                r.clear();
            }
            x=0;
        }
        for(auto i:s){cout<<i.second<<endl;}
    // // for(int i=0;i<10;i+=1){
    // //     cin>>s;
    // //     v.push_back(s);
    // // }
    // // sort(v.begin(),v.end());
    // // for(auto i:v){cout<<i<<" ";}
    // // v.push_back("jungle");
    // // cout<<v[0][2]<<endl;
    // vector<pair<int,string>>v1;
    // v1.push_back(make_pair(100,"jargon"));
    // v1.push_back(make_pair(90,"leargon"));
    // v1.push_back(make_pair(1000,"hedargon"));
    // sort(v1.begin(),v1.end());
    // for(auto i:v1){cout<<i.first<<endl;}

   return 0;
}