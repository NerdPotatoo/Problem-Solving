#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define end '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        string s;
        cin>>s;
        if(s[4]!='s'){
            s.insert(s.begin()+4,'s');
        }
        cout<<"Case "<<i<<": "<<s<<endl;
        }

    return 0;
}