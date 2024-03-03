#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n;
    cin >> n;
    int point[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> point[i];
    }
    int mx = point[0], mn = point[0], cnt = 0;
    for(int i = 1; i < n; i++)
    {
            if(point[i] > mx)
            {
                mx = point[i];
                cnt++;
            }
            if(point[i] < mn)
            {
                mn = point[i];
                cnt++;
            }
    }
    cout << cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
