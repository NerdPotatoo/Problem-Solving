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
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] -= 32;
            }
        }
        string temp ="YES";
        if(s == temp){
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