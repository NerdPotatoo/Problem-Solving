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
        int n, m, k;
        cin >> n >> m >>k;
        int parts = n - (n/m);
        if(n%m != 0){
            int tmp = n%m - 1;
            parts += tmp;
        }

        if(k>=parts || k == m || k == n) cout<<"NO\n";
        else cout<<"YES\n";
        
    }
    return 0;
}