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
        int a, b;
        cin>>a>>b;
        int tmp = a + (b*2);

        if(tmp%2==0)
        {
            if((b%2!=0) && a == 0)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        } 
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}