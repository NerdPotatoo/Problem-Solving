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
        ll n,x,y,sum = 0;
        cin >> n;
        vector<int> v;
        for(int i = 1; i<=n; i++){
            cin >> x >> y;
            v.push_back(x);
            v.push_back(y);
        }
        sort(v.begin(), v.end());
        for(int i =0; i<v.size()-1; i+=2){
            sum += min(v[i], v[i+1]);
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