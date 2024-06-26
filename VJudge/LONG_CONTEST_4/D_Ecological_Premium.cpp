#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define end '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    for(int i= 1; i<=t; i++)
    {
        int n, sum = 0;
        cin>>n;
        while(n--)
        {
            double f, ani, env, pre;
            cin>>f>>ani>>env;
            pre = f/ani;
            pre = pre*env*ani;
            ll ans = ceil(pre);
            sum += ans;
        }
        cout<<sum<<endl;
    }

    return 0;
}