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
        int n,m;
        cin>>n>>m;
        int a[n][m];
        

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                int mx = 0;
                if(i>0) mx = max(mx, a[i-1][j]);
                if(i<n-1) mx = max(mx, a[i+1][j]);
                if(j>0) mx = max(mx, a[i][j-1]);
                if(j<m-1) mx = max(mx, a[i][j+1]);
                if(mx != 0 && mx<a[i][j]){
                    cout<<mx<<" ";
                }
                else{
                    cout<<a[i][j]<<" ";
                }
            }
            cout<<"\n";
        }
    }

    return 0;
}