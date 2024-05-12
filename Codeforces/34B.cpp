#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n,m, ans = 0;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];

    }
    sort(a,a+n);
    for(int i = 0; i<n; i++){
         if(a[i]<0 && m--){
            ans += abs(a[i]);
        }
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

