#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 1; i< s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            cnt++;
        }
    }
    if(cnt==s.size()-1)
    {
        if(s[0] >='a') s[0] -=32;
        else s[0] += 32;
        for(int i = 1; i< s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i] += 32;
            }
        }
    }
    cout << s;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

