#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int r, b, diff_sock, same_sock;
    cin >> r >> b;
    diff_sock = min(r,b);
    same_sock = (max(r,b) - min(r,b))/2;
    cout << diff_sock << " " << same_sock;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

