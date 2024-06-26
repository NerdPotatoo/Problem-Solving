#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    ll n,t, cnt = 0, i = 0, j = 0, sum = 0;
    cin>>n>>t;
    vector<ll> v(n);
    for(i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    i = 0;
    for(j =0; j<n; j++){
        sum += v[j];
        if(sum>t)
        {
            sum -= v[i];
            i++;
        }
        cnt = max(cnt, j - i + 1);
    }
    cout<<cnt<<endl;
    return 0;
}