#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n, t;
    while(cin>>n>>t){
    int ans = n;
    while(n>=t)
    {
        ans+= n/t;
        n = (n%t)+(n/t);
    }
    cout<<ans<<endl;
    }
    return 0;
}