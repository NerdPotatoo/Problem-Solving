#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin >> t;
    while(t--)
    {
        int a,n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i<n; i++){
            cin >> a;
            v.push_back(a);
        }
        sort(v.rbegin(),v.rend());
        int ans = abs(v[0]-v[n-1])+abs(v[n-1]-v[1])+abs(v[1]-v[n-2])+abs(v[n-2]-v[0]);
        cout << ans << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}