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
    int t; cin>>t;

    int a,b,c,d;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a>c && a>d && b>c && b>d) cout<<4<<endl;
        else if(((a>c && b>=d) || (a>=c && b>d)) && ((a>d && b>=c) || (a>=d && b>c))) cout<<4<<endl;
        else if((a>c && b>=d) || (a>=c && b>d) || (a>d && b>=c) || (a>=d && b>c)) cout<<2<<endl;
        else cout<<0<<endl;
    }

    return 0;
}