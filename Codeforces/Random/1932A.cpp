#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin >> tc;
    while(tc--){
        int n, coin = 0, thron = 0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 1; i < n; i++){
            if(s[i] == '@'){
                coin++;
            }
            if(s[i] == '*' && s[i+1] == '*' && (i < (n-1))){
                break;
            }
        }
        cout << coin << "\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}