#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

ll reverse( ll n)
{
    ll rev = 0;
    while(n>0)
    {
        int rem = n%10;
        rev = rev*10 + rem;
        n/=10;
    }
    return rev;
}
int32_t main()
{
    fastIO;
    // CODE HERE
    ll n;
    while(cin>>n)
    {
        bool prime = true;
        ll len = sqrt(n);
        for(int i = 2; i<=len; i++)
        {
            if(n%i == 0)
            {
                prime = false;
                break;
            }
        }
        if(prime){
            ll rev = reverse(n);
            len = sqrt(rev);
            for(int i = 2; i<= len; i++)
            {
                if(rev%i == 0)
                {
                    prime = false;
                    break;
                }
            }
            if(prime) cout<<n<<" is emirp.\n";
            else cout<<n<<" is prime.\n";
        }
        else{
            cout<<n<<" is not prime.\n";
        }
    }

    return 0;
}