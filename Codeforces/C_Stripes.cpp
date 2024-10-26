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
        char grid[8][8], ans = '0';
        bool flag = false;
        for(int i = 0; i<8; i++)
        {
            flag = true;
            for(int j = 0; j<8; j++)
            {
                cin>>grid[i][j];
                if(grid[i][j] == '.') {
                    flag = false;
                }
                if(j>0 && flag)
                {
                    if(grid[i][j] != grid[i][j-1]) flag = false;   
                }
            }
            if(flag)
            {
                ans = grid[i][7];
            }
        }
        if(ans != '0')
        {
            cout<<ans<<endl;
            continue;
        }
        for(int i = 0; i<8; i++)
        {
            flag = true;
            for(int j = 0; j<8; j++)
            {
                if(grid[j][i] == '.') {
                    flag = false;
                }
                if(j>0 && flag)
                {
                    if(grid[j][i] != grid[j-1][i]) flag = false;   
                }
            }
            if(flag)
            {
                ans = grid[7][i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}