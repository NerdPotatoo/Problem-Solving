#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n == 1)  cout << "NO\n";
        else{
            cout << "YES\n";
            for(int i = 1; i<=n; i++){
                cout << "A";
            }
            cout << endl;
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