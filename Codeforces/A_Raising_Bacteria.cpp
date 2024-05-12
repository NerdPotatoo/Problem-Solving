#include<bits/stdc++.h>
using namespace std;
#define ll long long
 /*
     In this problem i counted set bits
     Thats the result
 */
void solve()
{
    // CODE HERE
    long long x, cnt = 0;
    cin >> x;
    while (x>0){
        cnt += x%2;
        x/=2;
    }
    cout << cnt;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}