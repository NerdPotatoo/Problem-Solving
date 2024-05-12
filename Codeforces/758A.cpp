#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n;
    cin >> n;
    int a[n], cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i = 0; i < n-1; i++){
            while(a[i] != a[n-1]){
                a[i]++;
                cnt++;
            }
    }
    cout << cnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

