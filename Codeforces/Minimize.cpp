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
        int a, b, tmp;
        cin>>a>>b;
        int ans = INT_MAX;
        for(int i = a; i<=b; i++)
        {
            tmp = (i-a) + (b-i);
            if(tmp<=ans)
            {
                ans = tmp;
            }
            else break;
        }
        cout<< ans<<endl;
    }
    return 0;
}