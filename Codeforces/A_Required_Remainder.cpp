#include<bits/stdc++.h>
using namespace std;
#define ll long long int

/*
let k = x*p + y

if k <= n
then x*p + y <= n
=>   x*p <= n-y
=>   p <= (n-y)/x
=>   p = floor((n-y)/x)

*/
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        ll x,y,n,k,p;
        cin >> x >> y >> n;

        p = floor((n-y)/x);
        k = (x*p) + y;
        cout << k << endl;
    } 
}

