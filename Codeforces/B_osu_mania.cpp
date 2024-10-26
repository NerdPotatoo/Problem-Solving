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
        char c;
        int n;

        cin >> n;
        vector<int> ans;
        while(n--)
        {
            for(int i = 1; i<= 4; i++)
            {
               cin>>c;
               if(c=='#'){
                ans.push_back(i);
               } 
            }
        }
        reverse(ans.begin(), ans.end());
        for(int v:ans)
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}