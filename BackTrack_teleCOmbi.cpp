#include <bits/stdc++.h>
using namespace std;
    
    
    void solve(string digit, string output, int index, vector<string>& ans, string mapping[] ) {
        
        //base case
        if(index >= digit.length()) {
            ans.push_back(output);
            return;
        }
        
        int number = digit[index] - '0';
        string value = mapping[number];
        
        for(int i=0; i<value.length(); i++) {
            output.push_back(value[i]); //1. a ->index+1 b ->index+2 base
            solve(digit, output, index+1, ans, mapping);
            for(auto j:output){cout<<j<<" ";}
            cout<<i;
            cout<<endl;
            output.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
            return ans;
        string output;
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }

    int main(){

    // vector<string>v1=letterCombinations("");
    // for(auto i:v1){cout<<i<<" ";}
    // cout<<endl;

    // vector<string>v2=letterCombinations("5");
    // for(auto i:v2){cout<<i<<" ";}
    // cout<<endl;
    vector<string>v3=letterCombinations("23");
    for(auto i:v3){cout<<i<<" ";}
    cout<<endl;
    return 0;
}