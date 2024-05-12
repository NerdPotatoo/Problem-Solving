#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin >> t;
    while(t--)
    {
        int n, st, ed;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i<n; i++){
            if(s[i] == 'B'){
                st = i;
                break;
            }
        }
        for(int i = n-1; i>=0; i--){
            if(s[i] == 'B'){
                ed = i;
                break;
            }
        }
        int ans = ed-st+1;
        cout << ans << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}