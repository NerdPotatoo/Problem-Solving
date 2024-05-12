#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int k = 1;
        for(int i = 0; i < n-1; i++){
            if(v[i+1]-v[i] > 1){
                k = 0;
                break;
            }
        }
        if(k) {
            cout << "YES\n";
        }
        else {
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