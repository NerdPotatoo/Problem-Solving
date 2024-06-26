#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n;
    cin>>n;
    cin.ignore();
    map<string, int> mp;
    for(int i = 0; i<n; i++)
    {
        string s;
        getline(cin, s);
        mp[s]++;
    }
    cout<<mp.size();

    return 0;
}