#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin  >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        ll a[n], sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        ll k = sum / (ll)n;
        bool f = true;
        for(int i = 0; i < n-1; i++){
            if(a[i]<k){
                f = false;
                break;
            }
            else{
                a[i+1] += a[i]-k;
                a[i] = k;
            }
        }
        if(f == true) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }

    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}