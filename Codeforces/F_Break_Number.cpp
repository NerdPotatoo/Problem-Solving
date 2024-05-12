#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, ans = 0;
    cin >> t;
    while(t--){
        long long n;
        int cnt = 0;
        cin >> n;
        while(n%2==0){
            cnt++;
            n = n/2;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}