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
        int n, k;
        cin>>n>>k;
        map<int,int> cards;
        for(int i = 1; i<=n ; i++)
        {
            int x;
            cin>>x;
            cards[x]++;
        }
        vector<pair<int,pair<int,bool>>> freq;
        for(auto [x,y] : cards)
        {
            freq.push_back({x,{y,true}});
        }
        int ans = 0;
        while(k--)
        {
            int mn = 0, idx = -1;
            for(int i = 0; i<freq.size(); i++)
            {
                if(freq[i].second.second)
                {
                    if(freq[i].second.first > mn)
                    {
                        mn = freq[i].second.first;
                        idx = i;
                    }
                }
            }
            ans += mn;
            freq[idx].second.second = false;
        }
        cout<<ans<<endl;
    }
       
    
    return 0;
}