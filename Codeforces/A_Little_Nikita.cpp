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
        int n,m, tmp;
        cin>>n>>m;
        if(n>=m){
            tmp = n-m;
            if(tmp%2==0) cout<<"Yes\n";
            else cout<<"No\n";
        }
        else{
            cout<<"No\n";
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