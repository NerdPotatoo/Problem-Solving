#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
vector<pair<int,int>>adj[100005];
int dis[100005];
class cmp
{
public:
    bool operator()(pair<int,int> a, pair<int,int> b){
        return a.second>b.second;
    }
};
void dijkstra(int sc)
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
            if(cost+childCost<dis[childNode])
            {
                dis[childNode] = cost+childCost;
                pq.push({childNode, dis[childNode]});
            }
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
        int n,e,sc,ds;
        cin>>n>>e>>sc>>ds;
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
        }
        dijkstra(sc);
        if(dis[ds]!=INT_MAX)
        {
            cout<<dis[ds]<<endl;

        }
        else{
            cout<<"NONE\n";
        }

    }
    return 0;
}