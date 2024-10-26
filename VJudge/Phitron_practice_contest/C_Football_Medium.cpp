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
        vector<int> a(n), b(n), ans(n) ;
        for(int i = 0; i<n; i++) cin >> a[i];
        for(int i = 0; i<n; i++) cin >> b[i];
        for(int i = 0; i<n; i++){
            ll tmp = (1LL * a[i] * 20) - (1LL * b[i] * 10);
            if(tmp>0) ans[i] = tmp;
            else ans[i] = 0;
        }
        cout<<*max_element(ans.begin(), ans.end())<<endl;
    }

    return 0;
}