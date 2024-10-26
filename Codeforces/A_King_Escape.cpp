#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
 
const int maxN = 1008;
bool vis[maxN][maxN];
int n;
int dx[8] = {1,1,0,-1,-1,-1,0,1}; 
int dy[8] = {0,1,1,1,0,-1,-1,-1}; 
bool isValid(int x, int y)
{
    return (x>=1 && x<=n && y>=1 && y<=n);
}
void bfs(int kx, int ky)
{
    queue<pair<int,int>> q;
    q.push({kx,ky});
    vis[kx][ky] = true;
    while(!q.empty())
    {
        auto [x,y] = q.front();
        q.pop();
        for(int i =0; i<8; i++)
        {
            int Dx = x+ dx[i];
            int Dy = y+ dy[i];
            if(isValid(Dx,Dy) && !vis[Dx][Dy])
            {
                vis[Dx][Dy] = true;
                q.push({Dx,Dy});
            }
        }
    }
}
int32_t main()
{
    fastIO;
    // CODE HERE
    int qx,qy,kx,ky,cx,cy;
    cin>>n>>qx>>qy>>kx>>ky>>cx>>cy;
    memset(vis, false, sizeof(vis));
    for(int i = 0; i<8; i++)
    {
        int DX = dx[i] + qx;
        int DY = dy[i] + qy;
        while(isValid(DX,DY))
        {
            vis[DX][DY] = true;
            DX += dx[i];
            DY += dy[i];
        }
    }
    bfs(kx,ky);

    cout<<(vis[cx][cy] ? "YES\n" : "NO\n");
    return 0;
}