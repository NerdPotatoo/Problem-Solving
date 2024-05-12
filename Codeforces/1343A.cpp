#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin >> tc;
    while(tc--){
        ll n, ans = 0, k = 0;
        cin >> n;
        while(1){
            ans += pow(2,k);
            if(n%ans==0 && ans!= 1){
                break;
            }
            k++;
        }
        ans = n/ans;
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

