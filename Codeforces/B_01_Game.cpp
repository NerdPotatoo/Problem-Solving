#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int cnt = 0, i = 0, j = s.size()-1;
        
        while(i<j)
        {
            if(s[i] != s[j])
            {
                cnt++;
            }
            else{
                break;
            }
            i++;
            j--;
        }
        if(cnt&1) cout<<"DA\n";
        else cout<<"NET\n";
    }
    return 0;
}