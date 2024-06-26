#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i = 0; i<n;i++)
    {
        cin>>a[i];
    }
    int res = 0;
    k--; 
    for(int i = 0; i<n;i++)
    {
        if(a[i]>=a[k] && a[i] != 0){
            res++;
        }
    }
    cout<<res;
    
    

}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}