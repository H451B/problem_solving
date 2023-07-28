#include <iostream>
#include <algorithm>
 
using namespace std;
 
bool is_small(string s1,string s2){
	return s1.size() < s2.size();
}
 
int main(){
	int n;
	cin >> n;
	string s[n];
	for(int i=0; i<n; i++)
		cin >> s[i];
	sort(s,s+n,is_small);
    cout<<endl;
	for(int i=0;i<n-1; i++){
		if(s[i+1].find(s[i]) == string::npos){
            cout<<s[i]<<" "<<s[i+1]<<endl;
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	for(int i=0; i<n; i++)
		cout << s[i] << endl;
}