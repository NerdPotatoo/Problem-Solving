#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define yes  cout<<"YES\n"
#define no   cout<<"NO\n"
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
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

        int n = s.size();
        if(s[0] == '1' && (s[n-1] >= '0' && s[n-1] <= '8')){
            bool ok = true;
            for(int i = 1; i<n-1; i++)
            {
                if(s[i]==0){
                    ok = false;
                    break;
                }
            }
            if(ok) yes;
            else no;
        }
        else{
            no;
        }
    }

    return 0;
}