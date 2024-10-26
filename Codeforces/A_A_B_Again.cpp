#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

int32_t main()
{
    fastIO;
    // CODE HERE
    int t,n, sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum = n%10;
        n /= 10;
        sum += n;
        cout<<sum<<endl;
    }

    return 0;
}