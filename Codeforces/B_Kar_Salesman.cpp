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
        int n, x, t1;
        cin>>n>>x;
        vector<int> cars(n+1);
        for(int i = 1; i<=n; i++)
        {
            cin>>cars[i];
            if(cars[i]%x == 0)
            {
                t1 = cars[i]/4;
            }
            else{
                t1 = (cars[i]/4)+1;
            }
            cars[i] = t1;
        }
        int ans = 0, ones = 0, tows = 0;
        for(int i = 1; i<=n; i++)
        {
            cout<<cars[i]<<" ";
            if(cars[i] == 0 || cars[i] == 1) ones++;
            else tows++;
        }
        cout<<endl;
        ans = ones+tows;

         cout<<ans<<endl;




    }
    return 0;
}