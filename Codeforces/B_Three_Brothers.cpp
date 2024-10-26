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
    int a, b;
    cin>>a>>b;
    if(a!= 1 && b!= 1) cout<<1<<endl;
    else if(a!= 2 && b!= 2) cout<<2<<endl;
    else cout<<3<<endl;
    return 0;
}