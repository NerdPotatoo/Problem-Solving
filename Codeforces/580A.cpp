#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n, idx = -1, cnt = 0, ans = 0;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n-1; i++)
    {
        cnt++;
        ans = max(ans, cnt);
        if(v[i]>v[i+1])
        {
            cnt = 0;
        }


    }

    cout << ans+1;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

