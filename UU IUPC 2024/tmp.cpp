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
        unordered_map<ll, ll> setCnt;

        for (int i = 0; i < n; ++i) {
            cin >> li[i];
            setCnt[li[i]] = __builtin_popcount(li[i]);
        }

        sort(li.begin(), li.end());

        for (int i = 0; i < q; ++i) {
            int cnt = 0;
            int l, r, k;
            cin >> l >> r >> k;

            for (int j : li) {
                if (l <= j && j <= r) {
                    if(setCnt[j] == k) cnt++;
                }
                else if (l > j) continue;
                else if (j > r) break;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}