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
        ll n,c,d;
        cin>>n>>c>>d;
        int len = n*n;
        vector<ll> v(len), ans;
        ll mn = INT_MAX;
        for(int i =0; i<len; i++)
        {
            cin>>v[i];
            mn = min(v[i], mn);
        }
        ans.push_back(mn);
        ll last = ans[0];
        for(int i = 1; i<n; i++)
        {
            last += d;
            ans.push_back(last);  
            //cout<<"oh";         
        }
        int sz = ans.size();
        for(int i =0; i<sz; i++)
        {
            last = ans[i];
            for(int j = 1; j<n; j++)
            {
                ans.push_back(last+c);
                last += c;
            }
        }
        sort(ans.begin(),ans.end());
        sort(v.begin(),v.end());
        // for(int i =0; i<len ;i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        // for(int i =0; i<len ;i++){
        //     cout<<ans[i]<<" ";
        // }
        //cout<<endl;
        bool flag = true;
        for(int i = 0; i<len; i++)
        {
            if(v[i]!=ans[i]){
                flag = false;
                break;
            }
        }
        (flag)? cout<<"YES\n":cout<<"NO\n";

    }

    return 0;
}