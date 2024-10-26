#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n, k, i = 0;
    cin>>n>>k;
    k--;
    vector<int> v(n);
    for( int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    bool flag = false;
    while(i<n)
    {
        if(i==k)
        {
            flag = true;
            break;
        }
        if(i>k){
            break;
        }
        i = v[i]+i;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}