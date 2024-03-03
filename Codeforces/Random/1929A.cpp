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
        int n;
        cin >> n;
        ll a[n], sum = 0;
        for(int i = 0; i< n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i = 1; i < n; i++){
            sum += (a[i]) - (a[i-1]);
        }
        printf("%lld\n", sum);
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
