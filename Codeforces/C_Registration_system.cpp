#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int n;
    cin >> n;
    map<string, int> mp;
    /*
     here s is the key 
     after taking input increasing the value
     while printing if val exceed 1 
     then printing less 1 with the string 
    */
    for(int i =1; i<=n; i++){
        string s;
        cin >> s;
        mp[s]++;
        if(mp[s]==1) cout << "OK\n";
        else cout << s << mp[s]-1 << "\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}