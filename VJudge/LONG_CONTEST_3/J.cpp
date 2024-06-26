#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int i = 1,n;
    while(cin>>n){
        if(n<0){
            return;
        }
        int tmp = 1, cnt = 0;
        while(tmp<n){
            tmp *= 2;
            cnt++;
        }
        cout<<"Case "<<i<<": "<<cnt<<"\n";
        i++;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}