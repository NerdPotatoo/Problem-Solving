#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for(int i =0; i<m; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int ans = INT_MAX, dif;
    for(int i = 0; i<m; i++){
        if((i+n-1)<m){
            dif = v[i+n-1]-v[i];
        }
        ans = min(ans,dif);
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

