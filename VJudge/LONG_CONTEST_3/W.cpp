#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t,test = 1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,sum = 0;
        for(int i = 0; i<n; i++){
            cin>>a;
            if(a>0){
                sum += a;
            }
        }
        cout<<"Case "<<test<<": "<<sum<<'\n';
        test++;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}