#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
int v[1005][1005];
int n,m;
bool valid(int i, int j)
{
    if(i>=0 && i<n && j>=0&& j<m) return true;
    else return false;
}
bool vis[1005][1005];
vector<pair<int,int>> d = {{0,1}, {1,0}, {-1,0}, {0,-1}};
void dfs(int si, int sj, int& sum)
{
    vis[si][sj] = true;
    sum += v[si][sj];
    for(int i= 0; i<4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if(valid(ci,cj) && !vis[ci][cj] && v[ci][cj] != 0)
        {
            dfs(ci,cj, sum);
        }
    }
}
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        memset(vis, false, sizeof(vis));
        cin>>n>>m;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                cin>>v[i][j];
            }
        }
        int ans = 0;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                int sum = 0;
                if(!vis[i][j] && v[i][j] != 0)
                {
                    
                    dfs(i,j, sum);
                }
                ans = max(sum, ans);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}