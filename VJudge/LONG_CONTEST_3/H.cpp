#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 #include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        int a[3];
        for(int i = 0; i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        cout<<"Case "<<i<<": "<<a[1]<<'\n';
    }
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}