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
    string s;
    cin>>s;
    string tmp = s;
    int sz = s.size();
    
    for(int i = 0 ; i<sz; i++)
    {
        if(i == 0 && s[i] == '9') continue;
       int t = s[i] - '0';
        
        if((9-t) < t)
        {
            t = 9-t;
            s[i] = (char)t + '0';
        }
    }
    
    
    cout<<s;
    return 0;
}