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
        int n, cnt = 0;
        cin >>n;
        string s;
        cin >> s;
        for(int i =0; i<n; i++){
            if(s[i] == '*' && s[i+1] == '*') break;
            else{
                if(s[i]=='@') cnt++;
            }
        }
        cout << cnt << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}