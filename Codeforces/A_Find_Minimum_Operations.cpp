#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
ll power(ll n, ll k)
{
    ll largest = 1;
    while(largest*k <= n) {
        largest *= k;
    }
    return largest;
}
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        if(k == 1)
        {
            cout<<n<<"\n";
        }
        else{
            int  count = 0;
            while(n >= k)
            {
                n -= power(n,k);
                count++;
            }
            cout<<count + n<<"\n";
        }

    }
    return 0;
}