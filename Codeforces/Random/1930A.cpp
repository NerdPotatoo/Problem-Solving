#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin >> tc;
    while(tc--){
        int n, len, sum = 0;
        cin  >> n;
        len = n*2;
        ll a[len];
        for(int i = 0; i < len; i++){
            cin >> a[i];
        }
        sort(a, a + len);
        int i = len - 1, j = i-1;
        while(n--){
            sum += min(a[i],a[j]);
            i -= 2;
            j -= 2;
        }
        cout << sum << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}