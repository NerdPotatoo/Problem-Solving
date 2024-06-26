#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin >>t;
    while(t--)
    {
        ll a,b,ans = 0;
        cin>>a>>b;
        
        ll tmp;
        if(a%b!=0){
           tmp = a/b;
           ans = (tmp*b)+b-a;
        } 
        cout<<ans<<'\n';
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}