#include <bits/stdc++.h>
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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = "aeiou", ans;
        int i = 0;
        while(n--)
        {
            if(i == 5) i = 0;
            ans.push_back(s[i]);
            i++;
        }
        sort(ans.begin(),ans.end());
        cout<<ans<<endl;
    }

    return 0;
}