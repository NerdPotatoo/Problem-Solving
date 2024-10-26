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
        int n, rows, people = 0;
        cin>>n>>rows;
        vector<int> mems(n+1);
        for(int i = 1; i<=n; i++)
        {
            cin>>mems[i];
            people += mems[i];
        }
        int rem = 0;
        for(int i = 1; i<=n; i++)
        {
            rem += mems[i]%2;
            rows -= (mems[i]/2);
        }
        // cout<<rem<<" "<<rows;
        if(rows<rem){
            rem -= rows;
            people -= 2*rem;
        }
        cout<<people<<endl;
    }
    return 0;
}