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
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i = 0; i<n; i++) cin>>v[i];
        sort(v.begin(),v.end());

        int ans = 0, cnt = 0;
        for(int i = 1; i<n; i++)
        {
            if(v[i]-v[i-1] <= k){
                cnt++;
            }
            else{
                ans = max(cnt,ans);
                cnt = 0;
            }
        }
        ans = max(cnt,ans);
        if(n==1) cout<<0<<endl;
        else    cout<<n-(ans+1)<<endl;
    }
    return 0;
}