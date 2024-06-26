#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,r,tmp = "";
        cin>>s;
        r = s;
        sort(r.begin(),r.end());
        unordered_map<char,char> um;
        for(int i = 0; i<n; i++)
        {
            if(r[i] != r[i+1]){
                tmp += r[i];
            }
        }
        int len = tmp.size();
        for(int i = 0; i<len; i++){
            um[tmp[i]] = tmp[len-1-i];
        }
        for(int i = 0; i<n; i++){
            r[i] = um[s[i]];
        }
        cout<<r<<endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}