#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin>>q;
    ll x;
    while(q--)
    {
        cin>>x;
        int idx = -1, lw = 0, hi = n-1;
        bool found = false;
        while(lw<=hi)
        {
            int mid = (lw + hi)/2;
            if(v[mid] <= x)
            {
                idx = mid;
                if(v[mid]==x){
                    found = true;
                }
                lw = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
        cout<<idx+1<<endl;
          
    }
    return 0;
}