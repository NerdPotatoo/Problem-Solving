#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n, n1, n2;
    cin >> n;
    n1 = n/10;
    n2 = (n/100)*10+(n%10);
    int ans = max(n,n1);
    ans = max(ans,n2);
    cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

