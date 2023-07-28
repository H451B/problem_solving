#include <bits/stdc++.h>
using namespace std;

map<string, vector<string>> mp;
int maxl=-1;

void dfs(vector<string>&v,int total)
{
    total+=1;
    for (auto& value : v) {
        if(mp[value].size()==0){
            if(total>maxl){maxl=total;}
            continue;
        }
        vector<string>& child = mp[value];
        dfs(child,total);
    }
}

int main(){
    int x;
    cin >> x;
    while (x--){
        int y = 0;
        string s, p, q, r;
        getline(cin >> ws, s);

        for (auto i : s){
            if (i == ' '){
                y += 1;
                if (y == 1){
                    p = r;
                }
                r.clear();
            }
            else{r =r + (char)tolower(i);}
        }
        q=r;
        mp[q].push_back(p);
    }

    vector<string>& values = mp["polycarp"];

    // for(auto &[key,values]:mp){cout<<key<<":";;for(auto &kk:values){cout<<kk<<" ";}cout<<endl;}
    
    int total=0;
    dfs(values,total);
    cout<<maxl+1;

    return 0;
}