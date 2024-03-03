#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if((sum - a) == a){
            cout << "YES\n";
        }
        else if((sum - b) == b){
            cout << "YES\n";
        }
        else if((sum - c) == c){
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

