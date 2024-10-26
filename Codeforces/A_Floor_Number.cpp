#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    int n, x;
    while(t--)
    {
        cin>>n>>x;
        if( n == 1 || n == 2){
            cout<<1<<endl;
            continue;
        }
        int ans = 1;
        n -= 2;
        if(n%x != 0)
        {
            ans++;   
        }
        ans += (n/x);
        cout<<ans<<endl;
    }
    return 0;
}