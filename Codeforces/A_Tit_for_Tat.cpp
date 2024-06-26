#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t; cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
        }
        
        for(int i = 0; i<n-1; i++)
        {
            if(v[i]<k){
                k = k - v[i];
                v[n-1] += v[i];
                v[i] = 0;
            }
            else{
                v[i] -= k;
                v[n-1] += k;
                k = 0;
            }   
        }
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}