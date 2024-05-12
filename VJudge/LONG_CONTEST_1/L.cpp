#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin >> t;
    while(t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> v;
        for(int i =0; i<n; i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        for(int i  = 1; i<n; i++){
            sum += (v[i]-v[i-1]);
        }
        cout << sum <<endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}