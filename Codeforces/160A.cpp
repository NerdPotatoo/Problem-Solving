#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n, sum = 0, MySum = 0, ans = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    int i = n-1;
    while(MySum<=(sum-MySum) && i>=0){
        MySum += v[i];
        i--;
        ans++;
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

