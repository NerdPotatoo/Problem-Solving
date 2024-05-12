#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int b[n], c[m], cnt = 0;
        for(int i = 0; i<n; i++){
            cin >> b[i];
        }
        for(int i = 0; i<m; i++){
            cin >> c[i];
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(b[i]+c[j]<=k) cnt++;
            }
        }
        cout << cnt << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}