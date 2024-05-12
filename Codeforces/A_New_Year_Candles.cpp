#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int a, b, ans;
    cin >> a >> b;
    ans = a;
    while(a/b != 0){
        if(a%b != 0){
            int t = a%b;
            ans += a/b;
            a /= b;
            a += t;
        }
        else{
            ans += a/b;
            a /= b;
        }
    }
    cout << ans;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}