#include<bits/stdc++.h>
using namespace std;

long long a, b, c, d, e, f;
long long fn(long long n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    return fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
}
int main() {
    int n, cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        cin >> a >> b >> c >> d >> e >> f >> n;
        printf("Case %d: %ld\n", i, fn(n) % 10000007);
    }
    return 0;
}