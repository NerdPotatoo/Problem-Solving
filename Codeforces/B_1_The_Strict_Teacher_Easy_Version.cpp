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
        int n,m,q;
        cin>>n>>m>>q;
        int a,b,x;
        cin>>a>>b>>x;
        if(x>min(a,b) && x<max(a,b))
        {
            if(abs(a-x)==abs(b-x) && abs(b-x)!=1)
            cout<<abs(b-x)-1<<endl;
            else
            cout<<min(abs(a-x),abs(b-x))<<endl;
        }
        else if(x<min(a,b))
        {
            cout<<min(a,b)-1<<endl;
        }
        else if(x>max(a,b))
        {
            cout<<n-max(a,b)<<endl;
        }
    }
    return 0;
}