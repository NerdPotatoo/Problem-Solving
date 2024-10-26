#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin >> t;
    while(t--)
    {
        ll n, a, b, i;
        cin >> n >> a >> b;
        ll profit = 0;
        ll range = min(n,b),tem = 0;
        if(a<b)
        {
            ll sumB = (b*(b+1))/2;
            ll sumA = ((a)*(a+1))/2;
            profit = sumB - sumA;
            tem = b-a;
            if(tem<=range)
                profit += (n-tem)*a;
            else
            {
                a = b - range;
                ll sumA = ((a)*(a+1))/2;
                profit = sumB - sumA;
            }
        }
        else{
            profit = n*a;
        }

        cout<<profit<<endl;
    }

    return 0;
}