#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t; cin>>t;
    while(t--)
    {
        ll n, ans = 0, f = 0; cin>>n;
        vector<ll> a(n), b(n+1);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        for(int i = 0; i<=n; i++){
            cin>>b[i];
        }
        ll mn = LLONG_MAX;
        for(int i = 0; i<n; i++){
           ans += abs(a[i]-b[i]);
           mn = min(mn,abs(b[n]-a[i]));
           mn = min(mn,abs(b[n]-b[i]));
           if(b[n]>= min(a[i],b[i]) && b[n]<=max(a[i],b[i])){
            f = 1;
           }
        }
        if(f){
            ans++;
        }
        else {
            ans = ans + mn +1;
        }
        cout<<ans<<"\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}