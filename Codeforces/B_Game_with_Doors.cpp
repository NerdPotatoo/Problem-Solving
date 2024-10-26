#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
 
int32_t main()
{
    fastIO
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,L,R;
        cin>>l>>r>>L>>R;
        int ans;
        int n = R-L, m = r-l;
        if(l==L && r==R)
        {
            ans = m;
        }
        else if((r<L && r<R) || (R<l && R<r))
        {
            ans = min(abs(r-L), abs(R-l));
        }
        else if((l==R && L<l) || (L==r && l<L))
        {
            ans = 2;
        }
        else if(n!=m)
        {
            if(R!=r && L!=l)
            {
                ans = min(n,m)+2;
            }
            else{
                ans = min(abs(r-L),abs(R-l))+1;
            }
        }
        else if((r>=L && r<R) || (R>=l && R<r))
        {
            ans = min(abs(r-L), abs(R-l)) + 2;
        }
        cout<<ans<<endl;
    }
    return 0;
}