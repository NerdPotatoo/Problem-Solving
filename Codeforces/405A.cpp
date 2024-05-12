#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n;
    cin >> n;
    vector<int > v(n);
    for (int i = 0; i< n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(auto x : v){
        cout << x << " ";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

