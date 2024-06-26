#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>=10){
            cout<<n-10<<" "<<10<<'\n';
        }
        else{
            cout<<0<<" "<<n<<'\n';
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