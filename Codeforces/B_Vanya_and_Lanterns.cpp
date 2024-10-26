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
    ll l;
    cin>>l;
    vector<int> a(n);
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());

    vector<int> v;
    double st = a[0];
    double ed = l-a[n-1];
    double tmp;
    for(int i = 0; i<n-1; i++)
    {
        tmp = max(tmp ,(double) a[i+1]-a[i]);
    }
    tmp /= 2.0;
    cout<<fixed<<setprecision(10)<<max({st,ed,tmp})<<endl;
    return 0;
}