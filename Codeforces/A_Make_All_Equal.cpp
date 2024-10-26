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
        vector<int> v(n);
        vector<int> count(n+1, 0);
        for(int i = 0; i<n ; i++)
        {
           cin>>v[i];
           count[v[i]]++;
        }
        int mx = INT_MIN;
        for(int i : count) mx = max(mx,i);
        cout<<n-mx<<endl;
    }
    return 0;
}