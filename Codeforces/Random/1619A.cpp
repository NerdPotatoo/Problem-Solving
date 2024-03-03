#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin  >>  tc;
    while(tc--)
    {
        string s;
        cin >> s;
        int len = s.size();
        if((len%2) != 0)
            cout << "NO\n";
        else{
                int k = len/2;
                bool check = true;
            for(int i = 0; i < len/2; i ++){
                if(s[i] != s[i+k]){
                    check = false;
                    break;
                }
            }
            if(check) cout << "YES\n";
            else cout << "NO\n";
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

