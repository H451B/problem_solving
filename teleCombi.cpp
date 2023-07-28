#include<bits/stdc++.h>
using namespace std;

vector<string> letterCombinations(string digits) {
        string s;
        vector<string>v[digits.size()],vec;
        map<char,string>mp;

        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";

        if(digits.size()==0){return vec;}
        else if(digits.size()==1){
            for(int i=0;i<mp[digits[0]].size();i+=1){
                s=mp[digits[0]][i];
                v[0].push_back(s);
            }
            return v[0];
        }else{
            int digSiz=digits.size()-1,p=0;
            for(int i=0;i<mp[digits[digSiz]].size();i+=1){
                s=mp[digits[digSiz]][i];
                v[0].push_back(s);
            }
            s.clear();
            for(int i=digSiz-1;i>-1;i-=1){
                for(int j=0;j<mp[digits[i]].size();j+=1){
                    for(int k=0;k<v[p].size();k+=1){
                        s+=mp[digits[i]][j];
                        s+=v[p][k];
                        v[p+1].push_back(s);
                        s.clear();
                    }
                }
                p+=1;
            }
            return v[p];
        }
    }


int main(){

    vector<string>v1=letterCombinations("");
    for(auto i:v1){cout<<i<<" ";}
    cout<<endl;

    vector<string>v2=letterCombinations("5");
    for(auto i:v2){cout<<i<<" ";}
    cout<<endl;
    vector<string>v3=letterCombinations("29");
    for(auto i:v3){cout<<i<<" ";}
    cout<<endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// const ll inf = numeric_limits<ll>::max();

// //#define io
// #define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// #define debug(i) cout<<"test "<<i<<endl;
// #define f1(i,n,m) for(int i=n;i<=m;i+=1)
// #define f2(i,n,m) for(int i=n;i>=m;i-=1)
// #define f3(n,m) for(auto n:m)
// #define sq(a) ((a)*(a))

// bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
// bool solve(){};

// int main(){
//     syncC;
//     #ifdef io
//     freopen("i.txt","r",stdin);
//     freopen("o.txt","w",stdout);
//     #endif

//     string s,r,t;
//     cin>>s;
//     map<char,string>mp;
//     mp['2']="abc";
//     mp['3']="def";
//     mp['4']="ghi";
//     mp['5']="jkl";
//     mp['6']="mno";
//     mp['7']="pqrs";
//     mp['8']="tuv";
//     mp['9']="wxyz";
//     vector<string>vs[s.size()];
//     if(s.size()==0){cout<<0<<endl;}
//     else if(s.size()==1){
//         for(int i=0;i<mp[s[0]].size();i+=1){
//             cout<<s[i]<<" ";
//         }
//         cout<<endl;
//     }else{
//         for(int i=0;i<mp[s[s.size()-1]].size();i+=1){
//             r=mp[s[s.size()-1]][i];
//             vs[0].push_back(r);
//         }
//         r.clear();
//         int p=0;
//         for(int i=s.size()-2;i>-1;i-=1){  //234 [2]=4cmplt [0]=2 [1]=3
//             for(int j=0;j<mp[s[i]].size();j+=1){ //mp[s[1]=3.size()=3]
//                 for(int k=0;k<vs[p].size();k+=1){
//                     r+=mp[s[i]][j];
//                     r+=vs[p][k];
//                     vs[p+1].push_back(r);
//                     r.clear();
//                 }
//             }
//             p+=1;
//         }
//         for(int i=0;i<vs[2].size();i+=1){
//             cout<<vs[2][i]<<" ";
//         }
//     }

//    return 0;
// }



// class Solution {
//     void Solve(string digits , string track, vector<string>&ans, vector<string>mp,int i){
//         if(i>=digits.size()){
//             ans.push_back(track);
//             return;
//         }
//        int p=int(digits[i]-'2');
//         for(int j=0;j<mp[p].size();j++){
//             // without back tracking
//             string s=track+mp[p][j];
//             Solve(digits, s,ans,mp,i+1);
//             // with back tracking
//             // track.push_back(mp[p][j]);
//             // string s=track+mp[p][j];
//             // Solve(digits, s,ans,mp,i+1);
//             // track.pop_back();
//         }
//         return;
//     }
// public:
//     vector<string> letterCombinations(string digits) {
//       vector<string>mp,ans;
//       mp.push_back("abc"); 
//       mp.push_back("def"); 
//       mp.push_back("ghi"); 
//       mp.push_back("jkl"); 
//       mp.push_back("mno"); 
//       mp.push_back("pqrs"); 
//       mp.push_back("tuv"); 
//       mp.push_back("wxyz");
//      string track;
//      if(digits.size() ==0)
//      return ans;
//      Solve(digits,track,ans,mp,0);
//      return ans;
//     }
// };


// vector<string> letterCombinations(string digits) {
//         string symbols[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//         vector<string> result;
//         if (digits.empty()) {
//             return result;
//         }
//         result.push_back("");
        
//         for (char ch : digits) {
//             int num = ch - '0';
//             vector<string> new_result;
//             for (const string& s : result) {
//                 for (char symbol : symbols[num]) {
//                     string tmp = s + symbol;
//                     new_result.push_back(tmp);
//                 }
//             }
//             result.swap(new_result);
//         }
        
//         return result;
//     }



// class Solution {
// private:
// void solve(string digit, string output,int index, vector<string>& ans,string mapping[])
// {
//     if(index >= digit.length())
//     {
//         ans.push_back(output);
//         return;
//     }

//     int number = digit[index] - '0';
//     string value = mapping[number];

//     for(int i = 0; i<value.length(); i++)
//     {
//         output.push_back(value[i]);
//         solve(digit, output, index + 1, ans, mapping);
//         output.pop_back();
//     }
// }    

// public:
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         if(digits.length() == 0)
//         {
//             return ans;
//         }

//         string output;
//         int index = 0;
//         string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//         solve(digits, output, index, ans, mapping);
//         return ans;
//     }
// };