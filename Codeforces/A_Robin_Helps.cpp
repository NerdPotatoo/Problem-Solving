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
        int n, k, gold = 0, count = 0;
        cin >> n >> k;
        for(int i = 0; i<n; i++)
        {
            int a;
            cin>>a;
            if(a>=k)
            {
                gold += a;
            }
            else if(a == 0 && gold > 0){
                gold--;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}