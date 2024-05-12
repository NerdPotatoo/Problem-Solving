#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n, ft, lt, mx=1,mn=100;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = n-1; i>=0; i--){
         mx = max(mx, a[i]);
        if(a[i]==mx){
            ft = i;
        }
    }
    for(int i = 0; i<n; i++){
         mn = min(mn, a[i]);
        if(a[i]==mn){
            lt = i;
        }
    }

    int ans;
    if(lt>ft){
        ans = (ft-0)+(n-1-lt);
    }
    else {
        ans = (ft-0)+(n-1-lt)-1;
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

