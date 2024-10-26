#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
 
int32_t main()
{
    fastIO
    // CODE HERE
    string s; 
    cin>>s;
    bool flag = true;
    for(int i = 0; i<s.size(); i++)
    {
        
        if(s[i] != '1' && s[i] != '4' || s[0] != '1') {
            flag = false;
            break;
        }
        if(i<s.size()-2){
            if(s[i] == '4' && s[i+1] == '4' && s[i+2] == '4')
            {
                flag = false;
                break;
            }
        }
        

    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}