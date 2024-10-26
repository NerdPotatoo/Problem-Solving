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
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i<n; i++) cin>>v[i];

        int i = 0, j = 0, cnt = 0;
        ll sum = 0;
        while(i<n && j<n)
        {
            sum += v[j];
            if(sum == 0)
            {
                cnt++;
                i = j+1;
                j++;
                continue;
            }
            if(j == n-1 && i<j)
            {
                i++;
                j = i;
                continue;
            }
            j++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}