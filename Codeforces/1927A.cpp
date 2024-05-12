#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin >> tc;
    while(tc--){
        int n, st, ed, cnt = 0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'B'){
                st = i;
                break;
            }
        }
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == 'B'){
                ed = i;
                break;
            }
        }
        for(int i = st; i<=ed; i++) {
                cnt++;
        }
        cout << cnt << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

