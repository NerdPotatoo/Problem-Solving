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
        string s;
        cin>>s;
        int si = 0, sj = 0, di = 1, dj = 1;
        bool found = false;
        for(int i = 0; i<n; i++)
        {

            if(si == di && sj == dj)
            {
                found = true;
                break;
            }
            if(s[i] == 'U')
            {
                sj += 1;
                si += 0;
            }
            else if(s[i] == 'D')
            {
                sj -= 1;
                si += 0;
            }
            else if(s[i] == 'R')
            {
                si += 1;
                sj += 0;
            }
            else if(s[i] == 'L'){
                si -= 1;
                sj += 0;
            }
            if(si == di && sj == dj)
            {
                found = true;
                break;
            }
        }

        if(found) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}