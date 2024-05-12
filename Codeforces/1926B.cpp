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
        int n;
        cin >> n;

        set<int> sz;

        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if(s[j] == '1'){
                    cnt++;
                }
            }
            if(cnt) sz.insert(cnt);
        }
        if(sz.size() > 1){
            cout << "TRIANGLE\n";
        }
        else {
            cout << "SQUARE\n";
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

