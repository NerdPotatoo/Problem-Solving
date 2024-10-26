#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastIO   ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, temp;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1] && s[i] == '0')
            {
                continue;
            }
            else
            {
                temp.push_back(s[i]);
            }
        }
        temp.push_back(s[n - 1]);
        int ones = 0, zeros = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] == '0')
                zeros++;
            else
                ones++;
        }

        if (zeros < ones)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}