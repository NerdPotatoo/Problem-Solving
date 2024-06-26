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
        int a,b,c,mn = INT_MAX;
        cin>>a>>b>>c;
        int d1 = abs(a-b)+abs(a-c);
        int d2 = abs(a-b)+abs(b-c);
        int d3 = abs(a-c)+abs(b-c);
        mn = min({d1,d2,d3});
        cout<<mn<<endl;
    }

    return 0;
}