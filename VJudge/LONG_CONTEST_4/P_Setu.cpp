#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define end '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        int n, sum = 0;
        cin>>n;
        cout<<"Case "<<i<<":\n";
        for(int j = 1; j<=n; j++)
        {
            string s;
            int x;
            cin>>s;
            if(s=="donate"){
                cin>>x;
                sum += x;
            }
            else{
                cout<<sum<<endl;
            }
        }
    }

    return 0;
}