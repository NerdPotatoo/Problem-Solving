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
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
        }
        string s;
        cin>>s;
        vector<ll> prefix(n);
        prefix[0] = v[0];
        for(int i = 1; i<n; i++)
        {
            prefix[i] = prefix[i-1]+v[i];
        }
        int l = 0,r = n-1;
        ll sum = 0;
        while(l<=r)
        {
            if(s[l] == 'L' && s[r] == 'R')
            {
                if(l == 0)
                {
                    sum += prefix[r];
                }
                else{
                    sum += (prefix[r] - prefix[l-1]);
                }
                l++;
                r--;
            }
            if(s[l] == 'R') l++;
            if(s[r] == 'L') r--;
        }
        cout<<sum<<endl;
    }
    return 0;
}