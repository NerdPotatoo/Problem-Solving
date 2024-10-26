#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
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
        vector<int> v(n), tmp;
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
        }
        bool flag = true;
        sort(v.begin(),v.end());
        for(int i = 1; i<n; i++)
        {
            if(v[i]%v[0]!=0)
            {
                tmp.push_back(v[i]);
            }
        }
        if(!tmp.empty()){
            for(int i = 0; i<tmp.size(); i++)
        {
            if(tmp[i]%tmp[0]!=0)
            {
                flag = false;
                break;
            }
        }
        }
        if(flag) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}