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
        int n, cnt = 0, cnt2 = 0;
        cin>>n;
        string s;
        cin>>s;
        for(int i = 0; i<n-2;i++)
        {
            string p = s.substr(i,3);
            if(p == "map" || p == "pie")
            {
                cnt++;
                i+=2;
            }
            
            // if(i<n-4 && check2(i,s))
            // {
            //     cnt2++;
            // }
        }
        // if(cnt>1) cnt-=cnt2;
        cout<<cnt<<endl;
    }
    return 0;
}