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
        ll n, sum = 0, k;
        bool flag = true;
        cin >> n;
        int a[n];
        for(int i = 0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }
        k = sum/n;
        for(int i = 0; i<n-1; i++){
            if(a[i]<k){
                flag = false;
                break;
            }
            else{
                a[i+1] += a[i]-k;
                a[i] = k;
            }
        }
        if(flag) cout << "YES\n";
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