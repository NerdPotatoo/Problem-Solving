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
    int t;
    cin>>t;
    while(t--)
    {
        ll n, hitPoint, elixer, ammo;
        cin>>n>>hitPoint>>elixer>>ammo;
        vector<int> m(n);
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            cin>>m[i];
            if(hitPoint>=m[i])
            {
                cnt++;
                hitPoint -= m[i];
            }
            else{
                if(ammo>0)
                {
                    cnt++;
                    ammo--;
                }
                else if((m[i]-hitPoint <= elixer))
                {
                    ll tmp = m[i]-hitPoint;
                    hitPoint += tmp;
                    elixer -= tmp;
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        
    }
    return 0;
}