#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++){
        int pos, lft, ans = 19;
        cin >> pos >> lft;
        if(pos>lft){
            int tmp = pos-lft;
            ans += (tmp*4) + (pos*4);
        }
        else if(pos<=lft){
            ans += (lft*4);
        }
        cout << "Case " << i << ": " << ans << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}