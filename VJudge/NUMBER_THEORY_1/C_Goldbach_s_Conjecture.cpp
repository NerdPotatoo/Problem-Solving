#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
const int mx = 1e6+1;


void seive(int mx, vector<int> &primes)
{
    vector<bool> isPrime(mx, true);
    isPrime[0] = isPrime[1] = false;
    for(int p = 2; p*p<mx; p++)
    {
        if(isPrime[p])
        {
            for(int j = p*p ; j<= mx; j+=p)
            {
                isPrime[j] = false;
            }
        }
    }
    for(int p = 3; p<=mx; p++)
    {
        if(isPrime[p])
        {
            primes.push_back(p); 
        }
    }
}
int32_t main()
{
    fastIO;
    // CODE HERE
    vector<int> primes;
    seive(mx, primes);
    int n;
    while(cin>>n && n!=0){
        
        int p2_idx = lower_bound(primes.begin(), primes.end(), n)-primes.begin();
        p2_idx--;
        int p1_idx = 0;
        while(p1_idx<p2_idx)
        {
            if(n == primes[p1_idx]+primes[p2_idx]){
                cout<<n<<" = "<<primes[p1_idx]<<" + "<<primes[p2_idx]<<endl;
                break;
            }
            else if(n<primes[p1_idx]+primes[p2_idx]){
                p2_idx--;
            }
            else{
                p1_idx++;
            }
        }
    }

    return 0;
}