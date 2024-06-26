#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define end '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll digitSum(ll n)
{
    if(n<10) return n;
    int sum = 0;
    while(n>0)
    {
        sum += n%10;
        n/=10;
    }
    return digitSum(sum);
}
int32_t main()
{
    fastIO;
    // CODE HERE
    ll n;
    while(cin>>n){
        if(n==0) break;
        ll ans = digitSum(n);
        cout<<ans<<endl;
    }

    return 0;
}