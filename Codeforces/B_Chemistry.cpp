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
        int n, k;
        cin>>n>>k;
        vector<int> freq(26,0);
        string s;
        cin>>s;
        
        for(int i = 0; i<s.size() ;i++)
        {
            freq[s[i] - 'a']++;
        }
        
        for(int i = 0; i<26 ; i++)
        {
           if( freq[i]&1 && k>0)
           {
                k--;
                freq[i]--;
           }
        }
        int i = 0;
        while(k>0 && i<26)
        {
            if(k>=freq[i])
            {
                k -= freq[i];
                freq[i] = 0;
            }
            else{
                freq[i] -= k;
                k = 0;
            }
            i++;
        }
        int cnt = 0;
        for(int i = 0; i<26 ; i++)
        {
           if(freq[i]&1)
           {
                cnt++;
           }
        }
        if(cnt <= 1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}