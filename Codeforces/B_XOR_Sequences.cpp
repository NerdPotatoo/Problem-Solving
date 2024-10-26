#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        ll mn = min(x,y), r1, r2, cnt = 0;
        ll mx = max(x,y);

        while(mn>0 && mx>0){
            r1 = mn%2;
            r2 = mx%2;
            if(r1 == r2){
                cnt++;
            }
            else{
                break;
            }
            mn /= 2;
            mx /= 2;
        }
        ll ans = pow(2,cnt);
        cout<<ans<<endl;
    }

    return 0;
}