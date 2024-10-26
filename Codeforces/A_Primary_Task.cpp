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
        bool flag = true;
        string s;
        cin>>s;
        if(s.size()<=2){
            flag = false;
        }
        else{
            if(s[0] != '1' || s[1] != '0'){
                flag = false;
            }
            
            if(s[2] == '0' || (s.size()==3 && s[2]=='1') )
            {
                flag = false;
            }
            
        }
        if(flag) cout<<"YES\n";
        else cout << "NO\n";
    }

    return 0;
}