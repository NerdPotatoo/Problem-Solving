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
    int n;
    cin>>n;
    vector<int> a(n), b(n-1), c(n-2);
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i<n-1; i++)
    {
        cin>>b[i];
    }
    for(int i = 0; i<n-2; i++)
    {
        cin>>c[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    bool flg = true;
    for(int i = 0; i<b.size(); i++)
    {
        if(b[i] != a[i])
        {
            cout<<a[i]<<endl;
            flg = false;
            break;
        }
    }
    if(flg) cout<<a[n-1]<<endl;
    flg = true;
    for(int i = 0; i<c.size(); i++)
    {
        if(c[i] != b[i])
        {
            cout<<b[i]<<endl;
            flg = false;
            break;
        }
    }
    if(flg) cout<<b[n-2]<<endl;
    return 0;
}