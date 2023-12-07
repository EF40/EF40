#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pi 3.141592653589793238462643383279502884197
typedef long long ll;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string>s(n);
    for(int i=0;i<n;i++)
    {
      cin>>s[i];
    }
    int ans = 1e9;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int res = 0;
            for (int k = 0; k < m; k++)
            {
                res += abs(s[i][k] - s[j][k]);
            }
            ans = min(ans, res);
        }
    }
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
//https://codeforces.com/contest/1676/problem/C