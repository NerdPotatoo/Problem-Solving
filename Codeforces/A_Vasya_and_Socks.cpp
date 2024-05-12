#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int n, m, t, ans;
    cin >> n >> m;
    ans = n;

    while(n/m!=0)
    {
        t = n%m;
        ans += n/m;
        n /= m;
        n += t;
    }
    cout << ans;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}