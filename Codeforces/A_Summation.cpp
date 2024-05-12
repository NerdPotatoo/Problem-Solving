#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a, ans = 0;
    for(int i = 1; i<=n; i++){
        cin >> a;
        ans += a;
    }
    cout << abs(ans) << endl;
}