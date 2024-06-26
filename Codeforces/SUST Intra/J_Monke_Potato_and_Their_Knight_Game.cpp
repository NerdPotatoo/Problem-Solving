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
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        ll initial = (x1+y1)%2;
        ll target = (x2+y2)%2;
        if(initial == target)
        {
            cout<<"Potato\n";
        }
        else{
            cout<<"Monke\n";
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}