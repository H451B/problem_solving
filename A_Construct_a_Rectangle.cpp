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
        vector<int> v;
        int y;
        for (int i = 0; i < 3; i += 1)
        {
            cin >> y;
            v.push_back(y);
        }
        sort(v.begin(), v.end());
        if (v[0] == v[2])
        {
            if (v[0] % 2 != 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
        else if (v[0] != v[1] && v[1] != v[2])
        {
            if (v[2] - v[1] != v[0])
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
        else if (v[0] == v[1])
        {
            if (v[2] % 2 != 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
        else if (v[1] == v[2])
        {
            if (v[0] % 2 != 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}