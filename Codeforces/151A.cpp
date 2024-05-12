#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int t1,t2,t3;
    t1 = (k*l)/nl;
    t2 = c*d;
    t3 = p/np;
    int ans = min(t1,t2);
    ans = min(ans,t3) / n;
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

