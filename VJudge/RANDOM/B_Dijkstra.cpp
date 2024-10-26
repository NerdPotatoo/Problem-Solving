#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int int64_t
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

int dis[1000005];
int par[1000005];
class cmp
{
public:
    bool operator()(pair<int,int> a, pair<int,int> b){
        return a.second>b.second;
    }
};
void dijkstra(int sc, vector<vector<pair<int,int>>>& adj)
{
    priority_queue<pair<int,int> , vector<pair<int,int>> , cmp> pq;
    pq.push({sc, 0});
    dis[sc] = 0;
    while(!pq.empty())
    {
        auto [node,cost] = pq.top();
        pq.pop();
        for(auto [childNode,childCost] : adj[node])
        {
            if(cost+childCost < dis[childNode])
            {
                dis[childNode] = cost+childCost;
                pq.push({childNode, dis[childNode]});
                par[childNode]  = node;
            }
        }
    }
}
int32_t main()
{
    fastIO;
    // CODE HERE
    
        int n,e;
        cin>>n>>e;
        vector<vector<pair<int,int>>> adj(n+1);
        while(e--)
        {
            int a,b,w;
            cin>>a>>b>>w;
            adj[a].push_back({b,w});
            adj[b].push_back({a,w});
        }
        for(int i = 1; i<=n; i++)
        {
            dis[i] = INT_MAX;
            par[i] = -1;
        }
        dijkstra(1, adj);
        if(par[n] == -1) {
            cout<<-1<<endl;
            return 0;
        }
        vector<int> path;
        int x = n;
        while(x!=-1)
        {
            path.push_back(x);
            x = par[x];
        }   

        for(auto x = path.rbegin(); x!=path.rend(); x++)
        {
            cout<<*x<<" ";
        }
    
    return 0;
}