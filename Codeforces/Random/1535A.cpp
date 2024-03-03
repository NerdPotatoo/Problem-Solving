#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin >>  tc;
    while(tc--){
        int a, b, c, d, mx1, mx2, mn1, mn2;
        cin >> a >> b >> c >> d;
        mx1 = max(a,b);
        mn1 = min(a,b);
        mx2 = max(c,d);
        mn2 = min(c,d);
        if((mx1 > mn2) && (mx2 > mn1)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

