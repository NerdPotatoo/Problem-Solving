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
        int n, sz;
        cin>>n;
        if(n == 1) sz = 1;
        else  sz = (n*2)-1;
        vector<int> v(sz,0);
        int a;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                cin >> a ;
                int k = i-j;
                v[k+n-1] = min(v[k+n-1],a);
            }
        }
        int sum = 0;
        for(auto x : v)
        {
            sum += x;
        }
        cout<<sum*(-1)<<endl;
    }
    return 0;
}