#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin >> t;
    while(t--){
        int n, sum = 0;
        cin>>n;
        vector<int> v;
        for(int i = 0; i<n; i++){
            int a;
            cin >> a;
            v.push_back(a);
            sum += abs(a);
        }
        cout << sum << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}