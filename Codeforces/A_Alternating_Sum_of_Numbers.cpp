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
        int x, n, sum = 0;
        cin>>n;
        for(int i = 1; i<=n; i++)
        {
            cin>>x;
            if(i%2==0) sum -= x;
            else sum += x;
        }
        cout<<sum<<endl;
    }
    return 0;
}