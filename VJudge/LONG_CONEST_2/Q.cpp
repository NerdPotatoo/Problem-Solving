#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
     int t;
    cin >> t;
    for(int i = 1; i<=t; i++){
        int n, sum = 0;
        cin >> n;
        for(int j =1; j<=n; j++){
            int a; 
            cin >> a;
            if(a>=0){
                sum += a;
            }
        }
        cout << "Case "<<i<<": "<< sum << "\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}