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
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int r = sqrt(n);
        bool ans = true;
        char c[r][r];
        if(r*r == n){ 
            int i = 0;
            for(int j = 0 ; j<r; j++)
            {
                for(int k = 0; k<r; k++)
                {
                    c[k][j] = s[i];
                    i++;
                    if(j == 0 && c[k][j] == '0') ans = false;
                    if(k == 0 && c[k][j] == '0') ans = false;
                    if(j == r-1 && c[k][j] == '0') ans = false;
                    if(k == r-1 && c[k][j] == '0') ans = false;
                    if(j==k && j!=0 && j!=r-1 && c[k][j] != '0') ans = false; 
                }
            }
        }
        else{
            ans = false;
        }
        if(ans) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}