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

        int n, st, ed, ans = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++)
        {
            cin >> v[i];
        }
        for(int i = 0; i<n; i++){
            if(v[i]==1){
                st = i;
                break;
            }
        }
        for(int i = n-1; i>=0; i--){
            if(v[i]==1){
                ed = i;
                break;
            }
        }
        for(int i = st; i<=ed; i++){
            if(v[i]==0){
                ans++;
            }
        }
        cout << ans << "\n";


    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

