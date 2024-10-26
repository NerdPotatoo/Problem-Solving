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
        int ans = n;
        string s;cin>>s;
        int i = 0, j = n-1;
        while(i<j)
        {
            if(s[i] == s[j])
            {
                break;
            }
            else{
                ans -= 2;
            }
            i++;
            j--;
        }
        cout<<ans<<endl;
    }
    return 0;
}