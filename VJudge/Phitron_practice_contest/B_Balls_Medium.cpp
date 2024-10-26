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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    vector<int> u(v.begin(),v.end());
    sort(u.begin(), u.end());
     int sz = u.size()/2;
    vector<pair<int,int>> p(sz);
    for(int i  = 0; i<sz; i++)
    {
        p[i].first = u[i];
        p[i].second = u[u.size()-i-1];
    }
    for(int i = 0; i<sz; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(v[j] == p[i].first) {
                cout<<j+1<<" ";
                break;
            }
        }
        for(int j = n-1; j>=0; j--)
        {
            if(v[j] == p[i].second) {
                cout<<j+1<<endl;
                break;
            }
        }
    }

    return 0;
}