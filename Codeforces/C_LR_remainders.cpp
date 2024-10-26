#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        ll n, m;
        cin>>n>>m;
        vector<ll> v(n), newArray, ans(n);
        ll prod = 1;
        for(int i = 0; i<n; i++) {
            cin >> v[i];
        }
        string s;
        cin>>s;
        int l = -1, r = n;
        
        for(int i = 0; i<n; i++)
        {
            if(s[i] == 'L'){
                l++;
                newArray.push_back(v[l]);
            }
            else{
                r--;
                newArray.push_back(v[r]);
            }
        }
        reverse(newArray.begin(), newArray.end());
        ans[0] = (newArray[0]%m);
        for(int i = 1; i<n; i++)
        {
            ans[i] = ((ans[i-1]%m) * (newArray[i]%m))%m; 
        }
        reverse(ans.begin(), ans.end());
        for(ll val:ans) cout<<val<<" ";
        cout<<endl;

    }
    return 0;
}