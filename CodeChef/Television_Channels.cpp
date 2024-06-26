#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n, tm;
    cin>>n;
    tm = n/2;
    if(tm*2==n)
    {
        cout<<tm;
    }
    else{
        cout<<tm+1;
    }

    return 0;
}