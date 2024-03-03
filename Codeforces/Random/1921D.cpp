#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, m;
        cin >> n >>m;
        vector<ll> v1(n),v2(m);
        for(int i = 0; i < n; i++){
            cin >> v1[i];
        }
        for(int i = 0; i < m; i++){
            cin >> v2[i];
        }
        sort(v1.rbegin(), v1.rend());
        sort(v2.begin(), v2.end());
        ll ans = 0;
        for(int i = 0; i < n; i++){
            ans += abs(v1[i]-v2[i]);
        }
        cout << ans << "\n";

    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

