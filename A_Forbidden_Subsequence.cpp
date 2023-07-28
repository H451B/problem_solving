#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = numeric_limits<ll>::max();

//#define io
#define syncC                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define debug(i) cout << "test " << i << endl;
#define f1(i, n, m) for (int i = n; i <= m; i += 1)
#define f2(i, n, m) for (int i = n; i >= m; i -= 1)
#define f3(n, m) for (auto n : m)
#define sq(a) ((a) * (a))

bool sortSec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}
bool solve(){};

int main()
{
    syncC;
#ifdef io
    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);
#endif

    ll x;
    cin >> x;
    while (x--)
    {
        string s, t;
        set<char> st;
        cin >> s >> t;

        sort(s.begin(), s.end());
        // cout << s << " ";
        string aa, bb, cc, xx;

        f1(i, 0, s.size() - 1)
        {
            if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c')
            {
                st.insert(s[i]);
            }
            if (s[i] == 'a')
            {
                aa += 'a';
            }
            else if (s[i] == 'b')
            {
                bb += 'b';
            }
            else if (s[i] == 'c')
            {
                cc += 'c';
            }
            else
            {
                xx += s[i];
            }
        }
        if (st.size() != 3)
        {
            cout << s << endl;
        }
        else
        {
            // cout << s << " ";
            sort(xx.begin(), xx.end());
            if (t[0] == 'a' && t[1] == 'b' && t[2] == 'c')
            {
                aa += cc;
                aa += bb;
                aa += xx;
                cout << aa << endl;
            }
            else
            {
                cout << s << endl;
            }
        }
    }

    return 0;
}