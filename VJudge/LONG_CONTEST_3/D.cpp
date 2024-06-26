#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t,a,b;
    cin>>t;
    for(int i= 1; i<=t; i++)
    {
        cin>>a>>b;
        int sum = 0;
        for(int j = a; j<=b; j++){
            if(j%2==1){
                sum += j;
            }

        }
        cout<<"Case "<<i<<": "<<sum<<'\n';

    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}