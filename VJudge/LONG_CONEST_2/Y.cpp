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
        long long n,m,k;
        cin >> n >> m >> k;
        long long a[n];
        for(int i = 0; i<n; i++){
            cin >> a[i];
        }
        bool f = true;
        int i = 0;

        while(i<n-1){
            if(a[i]>a[i+1]){
                i++;
                m += (a[i]-a[i+1]);
            }
            else if(a[i]<a[i+1]){
                if(a[i-1]-a[i] <= k){
                    i++;
                }
                else if(a[i+1]-a[i] <= (a[i]+m)){
                    i++;
                    m -= a[i+1]-a[i];
                }
                else{
                    f = false;
                    break;
                }

            }
            else{
                i++;
            }
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}