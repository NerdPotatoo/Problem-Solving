#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<ll> li(n);
        unordered_map<int, vector<ll>> setCnt;

        for (int i = 0; i < n; ++i) {
            cin >> li[i];
            setCnt[__builtin_popcount(li[i])].push_back(li[i]);
        }

        while(q--) {
            int l, r, k;
            cin >> l >> r >> k;
            sort(setCnt[k].begin(),setCnt[k].end());

            vector<ll>::iterator lower, upper;
            lower = lower_bound(setCnt[k].begin(), setCnt[k].end(), l);
            upper = upper_bound(setCnt[k].begin(), setCnt[k].end(), r);
            long long cnt = (upper - setCnt[k].begin()) - (lower - setCnt[k].begin());
            cout << cnt << endl;
        }
    }
    return 0;
}