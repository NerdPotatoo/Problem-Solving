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
        long long a, b, c, ans = 0;
        cin >> a >> b >> c;
        ans = a;
        ans += b/3;
        int x = b%3;
        if(x>0 && x+c<3){
            ans = -1;
        }
        else{
            ans += (x+c)/3;
            x = (x+c)%3;
            ans += x/2;
            ans += x%2;
        }

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