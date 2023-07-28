/** Bismillahir Rahmanir Rahim **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define endl '\n'
#define fi first
#define se second
#define ull unsigned ll
#define pii pair<int, int>
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define debug(x) cerr << #x << " "<< x << endl

int main()
{
   Fastio;
   int tt;
   string s;
   cin >> tt;
   while (tt--) {
      map<pair<pii, pii>, bool> mp;
      ll ans = 0;
      pii pos = {0, 0}, prev = {0, 0};
      cin >> s;
      for (int i = 0; i < s.size(); i++) {
         if (s[i] == 'S') {
            pos.se -= 1;
         } else if (s[i] == 'N') {
            pos.se += 1;
         } else if (s[i] == 'W') {
            pos.fi -= 1;
         } else {
            pos.fi += 1;
         }
         pii t1 = prev, t2 = pos;
         if (t1 > t2) swap(t1, t2);
         if (mp.find({t1, t2}) != mp.end()) ans++;
         else ans += 5;
         prev = pos;
         mp[{t1, t2}] = 1;
      }
      cout << ans << endl;
   }

    return 0;
}