#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
        }
        bool flag = true, start = false, end = false;
        if(abs(v[0]-v[0]) == abs(v[1]-v[n-1])){
            if(abs(v[n-1]-v[n-1]) == abs(v[0]-v[n-2])){
                flag = false;
            }
            else{
                end = true;
            }
        }
        else{
            start = true;
        }

        if(flag)
        {
            cout<<"YES\n";
            string s(n, 'B');
            if(start)
            {
                s[0] = 'R';
            }
            else{
                s[n-1] = 'R';
            }
            cout<<s<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}