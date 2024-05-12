#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, mx = INT_MIN, mn = INT_MAX;
        cin >> n;
        int a[n];
        for(int i = 0; i<n; i++){
            cin >> a[i];
            mx = max(a[i], mx);
            mn = min(a[i], mn);
        }
        cout << mx-mn << endl;
    }
}