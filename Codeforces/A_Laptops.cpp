#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i = 0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    bool flag = true;
    sort(v.begin(),v.end());
    
    for(int i = 0; (i<n ) ; i++)
    {
        if(v[i].first != v[i].second){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"Poor Alex\n"; 
    else cout<<"Happy Alex\n";
    return 0;
}