#include<bits/stdc++.h>
using namespace std;
#define ll long long
int f91(int n){
    if(n>=101) {
        return n-10;
    }
    else if(n<=100) 
    {
        int res = f91(f91(n+11));
        return res;
    }
}
void solve()
{
    // CODE HERE
    int n,ans;
    while(cin>>n){
        if(n==0) return;
        else ans = f91(n);
        cout<<"f91("<<n<<") = "<<ans<<'\n';
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}